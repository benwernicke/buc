#include "set.h"

static inline uint32_t fnv_hash(char* s)
{
    uint32_t h = 97;
    for (; *s; ++s) {
        h *= 103;
        h ^= *s;
    }
    return h;
}

static inline bool is_eq_str(char* a, char* b) { return strcmp(a, b) == 0; }

typedef struct entry_t entry_t;
struct entry_t {
    char* key;
    entry_t* next;
    entry_t* prev;
    entry_t* chain;

    uint32_t hash;
};

struct set_t {
    entry_t** set;
    entry_t* used;
    uint32_t cap;
    uint32_t size;
};

static inline void used_push(set_t* m, entry_t* e)
{
    if (m->used) {
        m->used->prev = e;
    }
    e->next = m->used;
    e->prev = NULL;
    m->used = e;
}

static inline void used_remove(set_t* m, entry_t* n)
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

static inline entry_t** set_pos(set_t* m, char* key, uint32_t hash)
{
    entry_t** iter = m->set + (hash % m->cap);
    for (;; iter = &(*iter)->chain) {
        if (!*iter) {
            return iter;
        }
        if ((*iter)->hash == hash && ISEQ((*iter)->key, key)) {
            return iter;
        }
    }
}

static inline entry_t** rehash_pos(set_t* m, uint32_t hash)
{
    entry_t** iter = m->set + (hash % m->cap);
    for (;; iter = &(*iter)->chain) {
        if (!*iter) {
            return iter;
        }
    }
}

static inline void rehash(set_t* m)
{
    memset(m->set, 0, m->cap * sizeof(*m->set));

    entry_t* iter = m->used;
    for (; iter; iter = iter->next) {
        entry_t** mp = rehash_pos(m, iter->hash);
        *mp = iter;
        iter->chain = NULL;
    }
}

static inline int realloc_and_rehash(set_t* m, uint32_t new_cap)
{
    m->cap = new_cap;
    m->set = realloc(m->set, m->cap * sizeof(*m->set));
    if (!m->set) {
        return -1;
    }

    rehash(m);
    return 0;
}

static inline entry_t** entry_create_at(
    set_t* m, entry_t** t, char* key, uint32_t hash)
{
    if (m->size >= m->cap * MAX_LOAD_FACTOR) {
        int err = realloc_and_rehash(m, m->cap * GROWTH_FACTOR);
        if (err) {
            NULL;
        }
        t = set_pos(m, key, hash);
    }

    *t = malloc(sizeof(**t));
    if (!*t) {
        NULL;
    }
    m->size += 1;
    (*t)->key = key;
    (*t)->hash = hash;
    (*t)->chain = NULL;
    used_push(m, *t);

    return t;
}

static inline int entry_remove_at(set_t* m, entry_t** e)
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
            return set_shrink_to_fit(m);
        }
    }
    return 0;
}

set_t* set_create(void)
{
    set_t* m = malloc(sizeof(*m));
    if (!m) {
        goto error;
    }

    m->cap = INITIAL_CAPACITY;
    m->size = 0;
    m->used = NULL;
    m->set = calloc(m->cap, sizeof(*m->set));
    if (!m->set) {
        goto error;
    }
    return m;
error:
    set_free(m);
    return NULL;
}

void set_free(set_t* m)
{
    if (m) {
        entry_t* iter = m->used;
        for (; iter;) {
            entry_t* t = iter;
            iter = iter->next;
            free(t);
        }

        free(m->set);
        free(m);
    }
}

uint32_t set_size(set_t* m) { return m->size; }

uint32_t set_capacity(set_t* m) { return m->cap * MAX_LOAD_FACTOR; }

uint32_t set_max_size(set_t* m)
{
    // TODO: UINT32_T_MAX * LOAD_FACTOR
    return 0;
}

int set_reserve(set_t* m, uint32_t to_reserve)
{
    if (set_capacity(m) < to_reserve) {
        return realloc_and_rehash(m, to_reserve / MAX_LOAD_FACTOR + 1);
    }
    return 0;
}

int set_shrink_to_fit(set_t* m)
{
    return realloc_and_rehash(m, m->size / FIT_LOAD_FACTOR);
}

int set_update_key(set_t* m, char* key)
{
    entry_t** n = set_pos(m, key, HASH(key));
    if (!*n) {
        return 1;
    }
    (*n)->key = key;
    return 0;
}

char** set_get_key(set_t* m, char* key)
{
    entry_t** n = set_pos(m, key, HASH(key));
    return *n ? &(*n)->key : NULL;
}

int set_insert(set_t* m, char* key)
{
    uint32_t hash = HASH(key);
    entry_t** n = set_pos(m, key, hash);
    int err = 0;
    if (!*n) {
        err = entry_create_at(m, n, key, hash) == NULL;
    }
    return err;
}

int set_remove(set_t* m, char* key)
{
    entry_t** n = set_pos(m, key, HASH(key));
    if (!*n) {
        return 1;
    }
    entry_remove_at(m, n);

    if (m->size <= m->cap * MIN_LOAD_FACTOR) {
        if (m->size == 0) {
            return realloc_and_rehash(m, INITIAL_CAPACITY);
        } else {
            return set_shrink_to_fit(m);
        }
    }

    return 0;
}

int set_move_pair(set_t* m, char* key, char** dest_key)
{
    entry_t** n = set_pos(m, key, HASH(key));
    if (!*n) {
        return 1;
    }
    if (dest_key) {
        *dest_key = (*n)->key;
    }

    int err = entry_remove_at(m, n);
    if (err) {
        return err;
    }

    return 0;
}

uintptr_t set_begin(set_t* m) { return (uintptr_t)m->used; }

uintptr_t set_end(set_t* m) { return (uintptr_t)NULL; }

uintptr_t set_next(set_t* m, uintptr_t iter)
{
    return (uintptr_t)((entry_t*)iter)->next;
}

char** set_iter_key(set_t* m, uintptr_t iter) { return &((entry_t*)iter)->key; }

bool set_contains(set_t* m, char* key)
{
    return *set_pos(m, key, HASH(key)) != NULL;
}
