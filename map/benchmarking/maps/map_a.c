#include "map.h"

typedef struct entry_t entry_t;
struct entry_t {
    char* key;
    entry_t* next;
    entry_t* prev;
    entry_t* chain;

    uint32_t val;
    uint32_t hash;
};

struct map_t {
    entry_t** map;
    entry_t* used;
    uint32_t cap;
    uint32_t size;
};

static inline void used_push(map_t* m, entry_t* e)
{
    if (m->used) {
        m->used->prev = e;
    }
    e->next = m->used;
    e->prev = NULL;
    m->used = e;
}

static inline void used_remove(map_t* m, entry_t* n)
{
    if (m->used == n) {
        m->used = n->next;
        return;
    }
    if (n->prev) {
        n->prev->next = n->next;
    }
    if (n->next) {
        n->next->prev = n->prev;
    }
}

static inline entry_t** map_pos(map_t* m, char* key, uint32_t hash)
{
    entry_t** iter = m->map + (hash % m->cap);
    for (;; iter = &(*iter)->chain) {
        if (!*iter) {
            return iter;
        }
        if ((*iter)->hash == hash && ISEQ((*iter)->key, key)) {
            return iter;
        }
    }
}

static inline entry_t** rehash_pos(map_t* m, uint32_t hash)
{
    entry_t** iter = m->map + (hash % m->cap);
    for (;; iter = &(*iter)->chain) {
        if (!*iter) {
            return iter;
        }
    }
}

static inline void rehash(map_t* m)
{
    memset(m->map, 0, m->cap * sizeof(*m->map));

    entry_t* iter = m->used;
    for (; iter; iter = iter->next) {
        entry_t** mp = rehash_pos(m, iter->hash);
        *mp = iter;
        iter->chain = NULL;
    }
}

static inline int realloc_and_rehash(map_t* m, uint32_t new_cap)
{
    m->cap = new_cap;
    m->map = realloc(m->map, m->cap * sizeof(*m->map));
    if (!m->map) {
        return -1;
    }

    rehash(m);
    return 0;
}

static inline entry_t** entry_create_at(
    map_t* m, entry_t** t, char* key, uint32_t val, uint32_t hash)
{
    if (m->size >= m->cap * MAX_LOAD_FACTOR) {
        int err = realloc_and_rehash(m, m->cap * GROWTH_FACTOR);
        if (err) {
            NULL;
        }
        t = map_pos(m, key, hash);
    }

    *t = malloc(sizeof(**t));
    if (!*t) {
        NULL;
    }
    m->size += 1;
    (*t)->key = key;
    (*t)->hash = hash;
    (*t)->val = val;
    (*t)->chain = NULL;
    used_push(m, *t);

    return t;
}

static inline int entry_remove_at(map_t* m, entry_t** e)
{
    used_remove(m, *e);
    entry_t* t = *e;
    *e = (*e)->chain;
    m->size -= 1;
    free(t);

    if (m->size <= m->cap * MIN_LOAD_FACTOR) {
        if (m->size == 0) {
            return realloc_and_rehash(m, INITIAL_CAPACITY);
        } else {
            return map_shrink_to_fit(m);
        }
    }
    return 0;
}

map_t* map_create(void)
{
    map_t* m = malloc(sizeof(*m));
    if (!m) {
        goto error;
    }

    m->cap = INITIAL_CAPACITY;
    m->size = 0;
    m->used = NULL;
    m->map = calloc(m->cap, sizeof(*m->map));
    if (!m->map) {
        goto error;
    }
    return m;
error:
    map_free(m);
    return NULL;
}

void map_free(map_t* m)
{
    if (m) {
        entry_t* iter = m->used;
        for (; iter;) {
            entry_t* t = iter;
            iter = iter->next;
            free(t);
        }

        free(m->map);
        free(m);
    }
}

uint32_t map_size(map_t* m) { return m->size; }

uint32_t map_capacity(map_t* m) { return m->cap * MAX_LOAD_FACTOR; }

uint32_t map_max_size(map_t* m)
{
    // TODO: UINT32_T_MAX * LOAD_FACTOR
    return 0;
}

int map_reserve(map_t* m, uint32_t to_reserve)
{
    if (map_capacity(m) < to_reserve) {
        return realloc_and_rehash(m, to_reserve / MAX_LOAD_FACTOR + 1);
    }
    return 0;
}

int map_shrink_to_fit(map_t* m)
{
    return realloc_and_rehash(m, m->size / FIT_LOAD_FACTOR);
}

int map_update_key(map_t* m, char* key)
{
    entry_t** n = map_pos(m, key, HASH(key));
    if (!*n) {
        return 1;
    }
    (*n)->key = key;
    return 0;
}

char** map_get_key(map_t* m, char* key)
{
    entry_t** n = map_pos(m, key, HASH(key));
    return *n ? &(*n)->key : NULL;
}

int map_insert(map_t* m, char* key, uint32_t val)
{
    uint32_t hash = HASH(key);
    entry_t** n = map_pos(m, key, hash);
    int err = 0;
    if (!*n) {
        err = entry_create_at(m, n, key, val, hash) == NULL;
    } else {
        (*n)->val = val;
    }
    return err;
}

int map_remove(map_t* m, char* key)
{
    entry_t** n = map_pos(m, key, HASH(key));
    if (!*n) {
        return 1;
    }
    entry_remove_at(m, n);

    if (m->size <= m->cap * MIN_LOAD_FACTOR) {
        if (m->size == 0) {
            return realloc_and_rehash(m, INITIAL_CAPACITY);
        } else {
            return map_shrink_to_fit(m);
        }
    }

    return 0;
}

int map_move_pair(map_t* m, char* key, char** dest_key, uint32_t* dest_val)
{
    entry_t** n = map_pos(m, key, HASH(key));
    if (!*n) {
        return 1;
    }
    if (dest_key) {
        *dest_key = (*n)->key;
    }
    if (dest_val) {
        *dest_val = (*n)->val;
    }

    int err = entry_remove_at(m, n);
    if (err) {
        return err;
    }

    return 0;
}

int map_copy_pair(map_t* m, char* key, char** dest_key, uint32_t* dest_val)
{
    entry_t** n = map_pos(m, key, HASH(key));
    if (!*n) {
        return 1;
    }
    if (dest_key) {
        *dest_key = (*n)->key;
    }
    if (dest_val) {
        *dest_val = (*n)->val;
    }
    return 0;
}

uint32_t* map_get(map_t* m, char* key)
{
    entry_t** n = map_pos(m, key, HASH(key));
    return *n ? &(*n)->val : NULL;
}
uint32_t* map_get_or_insert(map_t* m, char* key, uint32_t val)
{
    uint32_t hash = HASH(key);
    entry_t** n = map_pos(m, key, hash);

    if (!*n) {
        n = entry_create_at(m, n, key, val, hash);
        if (!n) {
            return NULL;
        }
    }
    return &(*n)->val;
}

uintptr_t map_begin(map_t* m) { return (uintptr_t)m->used; }

uintptr_t map_end(map_t* m) { return (uintptr_t)NULL; }

uintptr_t map_next(map_t* m, uintptr_t iter)
{
    return (uintptr_t)((entry_t*)iter)->next;
}

char** map_iter_key(map_t* m, uintptr_t iter) { return &((entry_t*)iter)->key; }

uint32_t* map_iter_value(map_t* m, uintptr_t iter)
{
    return &((entry_t*)iter)->val;
}

bool map_contains(map_t* m, char* key)
{
    return *map_pos(m, key, HASH(key)) != NULL;
}
