#include "map.h"

#include <assert.h>

typedef struct node_t node_t;
struct node_t {
    node_t** child;
    uint8_t cap;

    char* key;
    uint32_t val;
    node_t* next;
};

struct map_t {
    node_t* root;
    node_t* begin;
    uint32_t sz;
};

static node_t* trie_get(node_t* n, char* s)
{
    if (!*s) return n;
    if (!n->child[(uint8_t)*s]) return NULL;
    return trie_get(n->child[(uint8_t)*s], s + 1);
}

static node_t* trie_get_alloc(node_t* n, char* s)
{

    if (!*s) return n;

    if (n->cap <= (uint8_t)*s) {
        n->child = realloc(n->child, ((uint8_t)*s + 1) * sizeof(*n->child));
        assert(n->child);
        memset(n->child + n->cap, 0, ((uint8_t)*s - n->cap + 1) * sizeof(*n->child));
        n->cap = (uint8_t)*s + 1;
    }

    if (!n->child[(uint8_t)*s]) {
        n->child[(uint8_t)*s] = calloc(1, sizeof(node_t));
        assert(n->child[(uint8_t)*s]);
    }
    return trie_get_alloc(n->child[(uint8_t)*s], s + 1);
}

static void trie_free(node_t* n)
{
    if (!n) return;

    uint8_t i = 0;
    for (; i < n->cap; ++i) {
        trie_free(n->child[i]);
    }
    free(n->child);
    free(n);
}

static void node_init(map_t* m, node_t* n, char* key, uint32_t val)
{
    n->key = key;
    n->val = val;

    n->next = m->begin;
    m->begin = n;
    m->sz += 1;
}


map_t* map_create(void)
{
    map_t* m = malloc(sizeof(*m));
    assert(m);
    m->sz = 0;
    m->begin = NULL;
    m->root = calloc(1, sizeof(*m->root));
    assert(m->root);
    return m;
}

void map_free(map_t* m)
{
    trie_free(m->root);
    free(m);
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
    node_t* n = trie_get_alloc(m->root, key);
    if (!n) return -1;
    node_init(m, n, key, val);
    return 0;
}

int map_remove(map_t* m, char* key) { return 0; }
int map_move_pair(map_t* m, char* key, char** dest_key, uint32_t* dest_val) { return 0; }
int map_copy_pair(map_t* m, char* key, char** dest_key, uint32_t* dest_val) { return 0; }

uint32_t* map_get(map_t* m, char* key)
{
    node_t* n = trie_get(m->root, key);
    return n ? &n->val : NULL;
}

uint32_t* map_get_or_insert(map_t* m, char* key, uint32_t val)
{
    node_t* n = trie_get_alloc(m->root, key);
    if (!n) return NULL;
    if (!n->key) node_init(m, n, key, val);
    return &n->val;
}

uintptr_t map_begin(map_t* m) { return (uintptr_t)m->begin; }
uintptr_t map_end(map_t* m) { return 0; }
uintptr_t map_next(map_t* m, uintptr_t iter) { return (uintptr_t)((node_t*)iter)->next; }
char** map_iter_key(map_t* m, uintptr_t iter) { return &((node_t*)iter)->key; }
uint32_t* map_iter_value(map_t* m, uintptr_t iter) { return &((node_t*)iter)->val; }
