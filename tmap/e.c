#include "map.h"

#include <immintrin.h>
#define SSE_MODE _SIDD_UBYTE_OPS | _SIDD_CMP_EQUAL_EACH | _SIDD_LEAST_SIGNIFICANT
#include <assert.h>

typedef struct node_t node_t;
struct node_t {
    char* child_idx;
    node_t** child;

    char* key;
    node_t* next;
    uint32_t val;

    uint8_t sz;
    uint8_t cap;
};

struct map_t {
    node_t* root;
    uint32_t sz;
    node_t* begin;
};

static void node_init(map_t* m, node_t* n, char* key, uint32_t val)
{
    n->key = key;
    n->val = val;

    n->next = m->begin;
    m->begin = n;
    m->sz += 1;
}

static node_t* node_get(node_t* n, char* s)
{
    if (!*s) return n;
    if (!n->child) return NULL;

    __m128i c = _mm_set1_epi8(*s);

    uint8_t offset = 0;
    uint8_t idx = 0;

    for (; offset * 16 < n->cap; ++offset) {
        __m128i d = _mm_loadu_si128((__m128i*)n->child_idx + offset);
        idx = _mm_cmpistri(d, c, SSE_MODE);
        if (idx < 16) {
            return node_get(n->child[offset * 16 + idx], s + 1);
        }
    }
    return NULL;
}

static void node_free(node_t* n)
{
    if (!n) return;
    uint8_t i = 0;
    for (; i < n->sz; ++i) {
        node_free(n->child[i]);
    }
    free(n->child);
    free(n->child_idx);
    free(n);
}

static node_t* node_get_alloc(node_t* n, char* s)
{
    if (!*s) return n;

    if (!n->child) {
        n->child = calloc(16, sizeof(*n->child));
        n->child_idx = calloc(16, sizeof(*n->child_idx));
        assert(n->child && n->child_idx);
        n->child_idx[0] = *s;
        n->child[0] = calloc(1, sizeof(**n->child));
        n->sz = 1;
        n->cap = 16;
        return node_get_alloc(n->child[0], s + 1);
    }

    __m128i c = _mm_set1_epi8(*s);

    uint8_t offset = 0; 
    uint8_t idx = 0;
    for (; offset * 16 < n->cap; ++offset) {
        __m128i d = _mm_loadu_si128((__m128i*)n->child_idx + offset);
        idx = _mm_cmpistri(d, c, SSE_MODE);
        if (idx < 16) {
            break;
        }
    }

    if (idx == 16) {
        if (n->sz >= n->cap) {
            n->cap += 16;
            n->child = realloc(n->child, n->cap * sizeof(*n->child));
            n->child_idx = realloc(n->child_idx, n->cap * sizeof(*n->child_idx));
            assert(n->child && n->child_idx);
            memset(n->child + n->sz, 0, (n->cap - n->sz) * sizeof(*n->child));
            memset(n->child_idx + n->sz, 0, (n->cap - n->sz) * sizeof(*n->child_idx));
        }
        idx = n->sz++;
        n->child[idx] = calloc(1, sizeof(**n->child));
        assert(n->child[idx]);
        n->child_idx[idx] = *s;
    } else {
        idx += offset * 16;
    }
    return node_get_alloc(n->child[idx], s + 1);
}

map_t* map_create(void)
{
    map_t* m = malloc(sizeof(*m));
    assert(m);
    m->begin = NULL;
    m->sz    = 0;
    m->root  = calloc(1, sizeof(*m->root));
    assert(m->root);
    return m;
}

void map_free(map_t* m)
{
    if (!m) return;
    node_free(m->root);
    free(m);
}

uint32_t map_size(map_t* m) { return m->sz; }
bool map_contains(map_t* m, char* key) { return node_get(m->root, key) != NULL; }
int map_update_key(map_t* m, char* key)
{
    node_t* n = node_get(m->root, key);
    if (!n) return 1;
    n->key = key;
    return 0;
}
char** map_get_key(map_t* m, char* key)
{
    node_t* n = node_get(m->root, key);
    return n ? &n->key : NULL;
}

int map_insert(map_t* m, char* key, uint32_t val)
{
    node_t* n = node_get_alloc(m->root, key);
    assert(n);
    node_init(m, n, key, val);
    return 0;
}

int map_remove(map_t* m, char* key) { return 0; }
int map_move_pair(map_t* m, char* key, char** dest_key, uint32_t* dest_val) { return 0; }
int map_copy_pair(map_t* m, char* key, char** dest_key, uint32_t* dest_val) { return 0; }

uint32_t* map_get(map_t* m, char* key)
{
    node_t* n = node_get(m->root, key);
    return n ? &n->val : NULL;
}

uint32_t* map_get_or_insert(map_t* m, char* key, uint32_t val)
{
    node_t* n = node_get_alloc(m->root, key);
    assert(n);
    if (!n->key) {
        node_init(m, n, key, val);
    }
    return &n->val;
}

uintptr_t map_begin(map_t* m) { return (uintptr_t)m->begin; }
uintptr_t map_end(map_t* m) { return 0; }
uintptr_t map_next(map_t* m, uintptr_t iter) { return (uintptr_t)((node_t*)iter)->next; }
char** map_iter_key(map_t* m, uintptr_t iter) { return &((node_t*)iter)->key; }
uint32_t* map_iter_value(map_t* m, uintptr_t iter) { return &((node_t*)iter)->val; }
