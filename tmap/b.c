#include "map.h"

#include <immintrin.h>
#include <assert.h>

#define IDX_NULL 0xFF
#define SSE_MODE _SIDD_UBYTE_OPS | _SIDD_CMP_EQUAL_EACH | _SIDD_LEAST_SIGNIFICANT

typedef uint8_t idx_t;
typedef struct node_t node_t;

typedef void (*free_f) (node_t* n);
typedef idx_t (*child_f) (node_t* n, char c);
typedef idx_t (*child_alloc_f) (node_t* n, char c);
typedef node_t* (*get_f)(node_t* n, char* s);
typedef node_t* (*get_alloc_f)(node_t* n, char *s);

static node_t* node_create(void);

static void    tleaf_free(node_t* n);
/*static idx_t   tleaf_child(node_t* n, char c);*/
static idx_t   tleaf_child_alloc(node_t* n, char c);
static node_t* tleaf_get(node_t* n, char* s);
static node_t* tleaf_get_alloc(node_t* n, char* s);

static void    tlow_free(node_t* n);
static idx_t   tlow_child(node_t* n, char c);
static idx_t   tlow_child_alloc(node_t* n, char c);
static node_t* tlow_get(node_t* n, char* s);
static node_t* tlow_get_alloc(node_t* n, char* s);

static void    thigh_free(node_t* n);
static idx_t   thigh_child(node_t* n, char c);
static idx_t   thigh_child_alloc(node_t* n, char c);
static node_t* thigh_get(node_t* n, char* s);
static node_t* thigh_get_alloc(node_t* n, char* s);

typedef struct vt_t vt_t;
struct vt_t {
    free_f free;
    /*child_f child;*/
    /*child_alloc_f child_alloc;*/
    get_f get;
    get_alloc_f get_alloc;
};

static const vt_t vt_leaf = { 
    tleaf_free, 
    /*tleaf_child, */
    /*tleaf_child_alloc, */
    tleaf_get, 
    tleaf_get_alloc,
};

static const vt_t vt_low = { 
    tlow_free, 
    /*tlow_child, */
    /*tlow_child_alloc, */
    tlow_get, 
    tlow_get_alloc,
};

static const vt_t vt_high = { 
    thigh_free, 
    /*thigh_child, */
    /*thigh_child_alloc, */
    thigh_get, 
    thigh_get_alloc,
};

typedef struct entry_t entry_t;
struct entry_t {
    char* key;
    entry_t* next;
    uint32_t val;
};

struct node_t {
    const vt_t* vt;
    entry_t* e;
    node_t** child;
    char* child_idx;
    uint8_t num_child;
    uint8_t sz;
};

struct map_t {
    entry_t* begin;
    node_t* root;
    uint32_t sz;
};

static void trie_free(node_t* n) { if (n) n->vt->free(n); }
/*static idx_t trie_child(node_t* n, char c) { return n->vt->child(n, c); }*/
/*static idx_t trie_child_alloc(node_t* n, char c) { return n->vt->child_alloc(n, c); }*/
static node_t* trie_get(node_t* n, char* s) { return n->vt->get(n, s); }
static node_t* trie_get_alloc(node_t* n, char* s) { return n->vt->get_alloc(n, s); }

map_t* map_create(void)
{
    map_t* m = malloc(sizeof(*m));
    assert(m);
    m->root = node_create();
    assert(m->root);
    m->sz = 0;
    m->begin = NULL;
    return m;
}

static entry_t* entry_create(map_t* m, char* key, uint32_t val)
{
    entry_t* e = malloc(sizeof(*e));
    assert(e);
    e->key = key;
    e->val = val;
    
    m->sz += 1;
    e->next = m->begin;
    m->begin = e;
    return e;
}

static node_t* node_create(void)
{
    node_t* n = malloc(sizeof(*n));
    assert(n);
    n->e = NULL;
    n->vt = &vt_leaf;
    return n;
}

static void  tleaf_free(node_t* n) { free(n); }
/*static idx_t tleaf_child(node_t* n, char c) { return IDX_NULL; }*/

static idx_t tleaf_child_alloc(node_t* n, char c)
{
    n->child_idx = calloc(1, 16);
    n->child     = malloc(16 * sizeof(*n->child));
    assert(n->child && n->child_idx);
    n->sz = 1;
    n->vt = &vt_low;
    n->child[0] = node_create();
    n->child_idx[0] = c;
    return 0;
}

static node_t* tleaf_get(node_t* n, char* s) 
{ 
    if (!*s) return n;
    return NULL; 
}

static node_t* tleaf_get_alloc(node_t* n, char* s)
{
    if (!*s) return n;
    idx_t i = tleaf_child_alloc(n, *s);
    assert(i != IDX_NULL);
    return tleaf_get_alloc(n->child[i], s + 1);
}

static void tlow_free(node_t* n)
{
    idx_t i = 0;
    for (; i < n->sz; ++i) {
        trie_free(n->child[i]);
    }
    free(n->child_idx);
    free(n->child);
    free(n);
}

static idx_t tlow_child(node_t* n, char c)
{
    __m128i cs = _mm_set1_epi8(c);
    __m128i da = _mm_loadu_si128((__m128i*)n->child_idx);
    idx_t i = _mm_cmpistri(da, cs, SSE_MODE);
    return i < 16 ? i : IDX_NULL;
}

static idx_t tlow_child_alloc(node_t* n, char c)
{
    __m128i cs = _mm_set1_epi8(c);
    __m128i da = _mm_loadu_si128((__m128i*)n->child_idx);
    idx_t i = _mm_cmpistri(da, cs, SSE_MODE);
    
    if (i < 16) {
        return i;
    }

    if (n->sz < 16) {
        i = n->sz++;
        n->child_idx[i] = c;
        n->child[i] = node_create();
        assert(n->child[i]);
        return i;
    }

    i = 0;
    node_t** new_child = calloc(128, sizeof(*new_child));
    assert(new_child);

    for (; i < 16; ++i) {
        new_child[(idx_t)n->child_idx[i]] = n->child[i];
    }

    free(n->child);
    free(n->child_idx);
    n->vt = &vt_high;
    n->child = new_child;
    n->child[(idx_t)c] = node_create();
    return (idx_t)c;
}

static node_t* tlow_get(node_t* n, char* s)
{
    if (!*s) return n;
    idx_t i = tlow_child(n, *s);
    return i != IDX_NULL ? trie_get(n->child[i], s + 1) : NULL;
}

static node_t* tlow_get_alloc(node_t* n, char* s)
{
    if (!*s) return n;
    idx_t i = tlow_child_alloc(n, *s);
    return i != IDX_NULL ? trie_get_alloc(n->child[i], s + 1) : NULL;
}

static void thigh_free(node_t* n)
{
    idx_t i = 0;
    for (; i < 128; ++i) {
        trie_free(n->child[i]);
    }
    free(n->child);
    free(n);
}

static idx_t thigh_child(node_t* n, char c)
{
    return n->child[(idx_t)c] ? (idx_t)c : IDX_NULL;
}

static idx_t thigh_child_alloc(node_t* n, char c)
{
    assert(c < 128);
    idx_t i = (idx_t)c;
    if (!n->child[i]) {
        n->child[i] = node_create();
        assert(n->child[i]);
    }
    return i;
}

static node_t* thigh_get(node_t* n, char* s)
{
    if (!*s) return n;
    idx_t i = thigh_child(n, *s);
    return i != IDX_NULL ? trie_get(n->child[i], s + 1) : NULL;
}

static node_t* thigh_get_alloc(node_t* n, char* s)
{
    if (!*s) return n;
    idx_t i = thigh_child_alloc(n, *s);
    return i != IDX_NULL ? trie_get_alloc(n->child[i], s + 1) : NULL;
}

void map_free(map_t* m)
{
    if (!m) return;

    entry_t* i = m->begin;
    while (i) {
        entry_t* t = i;
        i = i->next;
        free(t);
    }

    trie_free(m->root);
    free(m);
}

uint32_t map_size(map_t* m) { return m->sz; }

bool map_contains(map_t* m, char* key) { return trie_get(m->root, key) != NULL; }

int map_update_key(map_t* m, char* key)
{
    node_t* n = trie_get(m->root, key);
    if (!n) return 1;
    n->e->key = key;
    return 0;
}

char** map_get_key(map_t* m, char* key)
{
    node_t* n = trie_get(m->root, key);
    return n ? &n->e->key : NULL;
}

int map_insert(map_t* m, char* key, uint32_t val)
{
    node_t* n = trie_get_alloc(m->root, key);

    if (!n->e) {
        n->e = entry_create(m, key, val);
        assert(n->e);
    }

    return 0;
}

int map_remove(map_t* m, char* key)
{
    // TODO
    assert(0);
    return 0;
}

int map_move_pair(map_t* m, char* key, char** dest_key, uint32_t* dest_val)
{
    assert(0);
    // TODO
    return 0;
}

int map_copy_pair(map_t* m, char* key, char** dest_key, uint32_t* dest_val)
{
    // TODO
    assert(0);
    return 0;
}

uint32_t* map_get(map_t* m, char* key)
{
    node_t* n = trie_get(m->root, key);
    return n ? &n->e->val : NULL;
}

uint32_t* map_get_or_insert(map_t* m, char* key, uint32_t val)
{
    node_t* n = trie_get_alloc(m->root, key);
    assert(n);

    if (!n->e) {
        n->e = entry_create(m, key, val);
        assert(n->e);
    }

    return &n->e->val;
}

uintptr_t map_begin(map_t* m) { return (uintptr_t)m->begin; }
uintptr_t map_end(map_t* m) { return 0; }
uintptr_t map_next(map_t* m, uintptr_t iter) { return (uintptr_t)((entry_t*)iter)->next; }
char** map_iter_key(map_t* m, uintptr_t iter) { return &((entry_t*)iter)->key; }
uint32_t* map_iter_value(map_t* m, uintptr_t iter) { return &((entry_t*)iter)->val; }
