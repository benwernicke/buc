#include "map.h"

#include <immintrin.h>
#include <assert.h>
#include <stdio.h>

#define IDX_NULL 0xFF

typedef struct node_t node_t;
struct node_t {
    char* child_idx;
    node_t** child;
    char* key;
    uint32_t val;
    node_t* next;
    uint8_t sz;
    uint8_t cap;
};

struct map_t {
    node_t* root;
    uint32_t sz;
    node_t* begin;
};

map_t* map_create(void)
{
    map_t* m = malloc(sizeof(*m));
    if (!m) return NULL;
    m->root = calloc(1, sizeof(*m->root));
    if (!m->root) {
        free(m);
        return NULL;
    }
    m->sz = 0;
    m->begin = NULL;
    return m;
}

#define SSE_MODE _SIDD_UBYTE_OPS | _SIDD_CMP_EQUAL_EACH | _SIDD_LEAST_SIGNIFICANT

static uint8_t node_find_child(node_t* n, char c)
{

    switch(n->cap) {
    case 0:
        return IDX_NULL;
    case 128:
        return (uint8_t)c;
    default:;
        __m128i cs = _mm_set1_epi8(c);
        __m128i da = _mm_loadu_si128((__m128i*)n->child_idx);
        uint8_t idx = _mm_cmpistri(da, cs, SSE_MODE);
        return idx < 16 ? idx : IDX_NULL;
    }
}

static node_t* trie_get_and_alloc(node_t* n, char* s)
{
    if (!*s) return n;

    uint8_t idx;

    switch (n->cap) {
    case 128:
        idx = (uint8_t)*s;
        break;
    case 0:
        n->cap = 16;
        n->child_idx = calloc(16, 1);
        n->child = calloc(16, sizeof(*n->child));
        assert(n->child_idx && n->child);
        idx = n->sz++;
        n->child_idx[idx] = *s;
        break;
    default:;
        __m128i c = _mm_set1_epi8(*s);
        __m128i d = _mm_loadu_si128((__m128i*)n->child_idx);
        idx = _mm_cmpistri(d, c, SSE_MODE);

        if (idx == 16) {
            if (n->sz == 16) {
                node_t** new_child = calloc(128, sizeof(*new_child));
                idx = 0;
                for (; idx < 16; ++idx) {
                    new_child[(uint8_t)n->child_idx[idx]] = n->child[idx];
                }
                n->cap = 128;
                free(n->child);
                free(n->child_idx);
                n->child_idx = NULL;
                n->child = new_child;
                idx = (uint8_t)*s;
            } else {
                idx = n->sz++;
                n->child_idx[idx] = *s;
            }
        }
        break;
    }

    if (!n->child[idx]) {
        n->child[idx] = calloc(1, sizeof(**n->child));
        assert(n->child[idx]);
    }

    return trie_get_and_alloc(n->child[idx], s + 1);
}

static void trie_free(node_t* n)
{
    if (!n) return;

    uint8_t idx = 0;

    switch (n->cap) {
    case 128:
        for (; idx < 128; ++idx) {
            trie_free(n->child[idx]);
        }
        break;
    case 0:
        break;
    default:
        for (; idx < n->sz; ++idx) {
            trie_free(n->child[idx]);
        }
        break;
    }
    free(n->child);
    free(n->child_idx);
    free(n);
}

void map_free(map_t* m)
{
    if (!m) return;

    trie_free(m->root);
    free(m);
}

static node_t* trie_get(node_t* n, char* s)
{
    if (!*s) return n->key ? n : NULL;
    uint8_t idx = node_find_child(n, *s);
    if (idx == IDX_NULL) return NULL;
    return trie_get(n->child[idx], s + 1);
}

uint32_t map_size(map_t* m) { return m->sz; }
bool map_contains(map_t* m, char* key) { return trie_get(m->root, key) != NULL; }

int map_update_key(map_t* m, char* key)
{
    node_t* n = trie_get(m->root, key);
    if (!n) return 1;
    n->key = key;
    return 0;
}

char** map_get_key(map_t* m, char* key)
{
    node_t* n = trie_get(m->root, key);
    return n ? &n->key : NULL;
}

int map_insert(map_t* m, char* key, uint32_t val)
{
    node_t* n = trie_get_and_alloc(m->root, key);
    if (!n) return -1;

    if (!n->key) {
        m->sz++;
        n->next = m->begin;
        m->begin = n;

        n->key = key;
    }
    n->val = val;
    return 0;
}

int map_remove(map_t* m, char* key)
{
    // TODO
    return 0;
}

int map_move_pair(map_t* m, char* key, char** dest_key, uint32_t* dest_val)
{
    // TODO
    return 0;
}

int map_copy_pair(map_t* m, char* key, char** dest_key, uint32_t* dest_val)
{
    // TODO:
    return 0;
}

uint32_t* map_get(map_t* m, char* key)
{
    node_t* n = trie_get(m->root, key);
    return n ? &n->val : NULL;
}

uint32_t* map_get_or_insert(map_t* m, char* key, uint32_t val)
{
    node_t* n = trie_get_and_alloc(m->root, key);

    if (!n) return NULL;

    if (!n->key) {
        n->next = m->begin;
        m->begin = n;
        m->sz += 1;
        
        n->key = key;
        n->val = val;
    }
    return &n->val;
}

uintptr_t map_begin(map_t* m) { return (uintptr_t)m->begin; }
uintptr_t map_end(map_t* m) { return 0; }
uintptr_t map_next(map_t* m, uintptr_t iter) { return (uintptr_t)((node_t*)iter)->next; }
char** map_iter_key(map_t* m, uintptr_t iter) { return &((node_t*)iter)->key; }
uint32_t* map_iter_value(map_t* m, uintptr_t iter) { return &((node_t*)iter)->val; }
