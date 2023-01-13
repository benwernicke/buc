#ifndef MAKE_SET_H
#define MAKE_SET_H

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define MAKE_SET_HEADER(PREFIX, KEY_TYPE)                               \
typedef struct PREFIX##_t PREFIX##_t;                                   \
                                                                        \
PREFIX##_t* PREFIX##_create(void);                                      \
void PREFIX##_free(PREFIX##_t* m);                                      \
                                                                        \
uint32_t PREFIX##_size(PREFIX##_t* m);                                  \
uint32_t PREFIX##_capacity(PREFIX##_t* m);                              \
uint32_t PREFIX##_max_size(PREFIX##_t* m);                              \
bool PREFIX##_contains(PREFIX##_t* m, KEY_TYPE key);                    \
                                                                        \
int PREFIX##_reserve(PREFIX##_t* m, uint32_t to_reserve);               \
int PREFIX##_shrink_to_fit(PREFIX##_t* m);                              \
                                                                        \
int PREFIX##_update_key(PREFIX##_t* m, KEY_TYPE key);                   \
KEY_TYPE* PREFIX##_get_key(PREFIX##_t* m, KEY_TYPE key);                \
                                                                        \
int PREFIX##_insert(PREFIX##_t* m, KEY_TYPE key);                       \
int PREFIX##_remove(PREFIX##_t* m, KEY_TYPE key);                       \
int PREFIX##_move_key(PREFIX##_t* m, KEY_TYPE key, KEY_TYPE* dest_key); \
                                                                        \
uintptr_t PREFIX##_begin(PREFIX##_t* m);                                \
uintptr_t PREFIX##_end(PREFIX##_t* m);                                  \
uintptr_t PREFIX##_next(PREFIX##_t* m, uintptr_t iter);                 \
KEY_TYPE* PREFIX##_iter_key(PREFIX##_t* m, uintptr_t iter);            


#define MAKE_SET_IMPLEMENTATION(PREFIX, KEY_TYPE, HASH, ISEQ,                           \
            INITIAL_CAPACITY, GROWTH_FACTOR, MAX_LOAD_FACTOR,                           \
            FIT_LOAD_FACTOR, MIN_LOAD_FACTOR)                                           \
                                                                                        \
    typedef struct entry_t entry_t;                                                     \
    struct entry_t {                                                                    \
        KEY_TYPE key;                                                                   \
        entry_t* next;                                                                  \
        entry_t* prev;                                                                  \
        entry_t* chain;                                                                 \
                                                                                        \
        uint32_t hash;                                                                  \
    };                                                                                  \
                                                                                        \
    struct PREFIX##_t {                                                                 \
        entry_t** set;                                                                  \
        entry_t* used;                                                                  \
        uint32_t cap;                                                                   \
        uint32_t size;                                                                  \
    };                                                                                  \
                                                                                        \
    static inline void used_push(PREFIX##_t* m, entry_t* e)                             \
    {                                                                                   \
        if (m->used) {                                                                  \
            m->used->prev = e;                                                          \
        }                                                                               \
        e->next = m->used;                                                              \
        e->prev = NULL;                                                                 \
        m->used = e;                                                                    \
    }                                                                                   \
                                                                                        \
    static inline void used_remove(PREFIX##_t* m, entry_t* n)                           \
    {                                                                                   \
        if (m->used == n) {                                                             \
            m->used = n->next;                                                          \
            return;                                                                     \
        }                                                                               \
        if (n->prev) {                                                                  \
            n->prev->next = n->next;                                                    \
        }                                                                               \
        if (n->next) {                                                                  \
            n->next->prev = n->prev;                                                    \
        }                                                                               \
    }                                                                                   \
                                                                                        \
    static inline entry_t** PREFIX##_pos(PREFIX##_t* m, KEY_TYPE key, uint32_t hash)    \
    {                                                                                   \
        entry_t** iter = m->set + (hash % m->cap);                                      \
        for (;; iter = &(*iter)->chain) {                                               \
            if (!*iter) {                                                               \
                return iter;                                                            \
            }                                                                           \
            if ((*iter)->hash == hash && ISEQ((*iter)->key, key)) {                     \
                return iter;                                                            \
            }                                                                           \
        }                                                                               \
    }                                                                                   \
                                                                                        \
    static inline entry_t** rehash_pos(PREFIX##_t* m, uint32_t hash)                    \
    {                                                                                   \
        entry_t** iter = m->set + (hash % m->cap);                                      \
        for (;; iter = &(*iter)->chain) {                                               \
            if (!*iter) {                                                               \
                return iter;                                                            \
            }                                                                           \
        }                                                                               \
    }                                                                                   \
                                                                                        \
    static inline void rehash(PREFIX##_t* m)                                            \
    {                                                                                   \
        memset(m->set, 0, m->cap * sizeof(*m->set));                                    \
                                                                                        \
        entry_t* iter = m->used;                                                        \
        for (; iter; iter = iter->next) {                                               \
            entry_t** mp = rehash_pos(m, iter->hash);                                   \
            *mp = iter;                                                                 \
            iter->chain = NULL;                                                         \
        }                                                                               \
    }                                                                                   \
                                                                                        \
    static inline int realloc_and_rehash(PREFIX##_t* m, uint32_t new_cap)               \
    {                                                                                   \
        m->cap = new_cap;                                                               \
        m->set = realloc(m->set, m->cap * sizeof(*m->set));                             \
        if (!m->set) {                                                                  \
            return -1;                                                                  \
        }                                                                               \
                                                                                        \
        rehash(m);                                                                      \
        return 0;                                                                       \
    }                                                                                   \
                                                                                        \
    static inline entry_t** entry_create_at(                                            \
        PREFIX##_t* m, entry_t** t, KEY_TYPE key, uint32_t hash)                        \
    {                                                                                   \
        if (m->size >= m->cap * MAX_LOAD_FACTOR) {                                      \
            int err = realloc_and_rehash(m, m->cap * GROWTH_FACTOR);                    \
            if (err) {                                                                  \
                NULL;                                                                   \
            }                                                                           \
            t = PREFIX##_pos(m, key, hash);                                             \
        }                                                                               \
                                                                                        \
        *t = malloc(sizeof(**t));                                                       \
        if (!*t) {                                                                      \
            NULL;                                                                       \
        }                                                                               \
        m->size += 1;                                                                   \
        (*t)->key = key;                                                                \
        (*t)->hash = hash;                                                              \
        (*t)->chain = NULL;                                                             \
        used_push(m, *t);                                                               \
                                                                                        \
        return t;                                                                       \
    }                                                                                   \
                                                                                        \
    static inline int entry_remove_at(PREFIX##_t* m, entry_t** e)                       \
    {                                                               \
        used_remove(m, *e);                                         \
        entry_t* t = *e;                                            \
        *e = (*e)->chain;                                           \
        m->size -= 1;                                               \
        free(t);                                                    \
                                                                    \
        if (m->size <= m->cap * MIN_LOAD_FACTOR) {                  \
            if (m->size == 0) {                                     \
                return realloc_and_rehash(m, INITIAL_CAPACITY);     \
            } else {                                                \
                return PREFIX##_shrink_to_fit(m);                   \
            }                                       \
        }                                           \
        return 0;                                   \
    }                                               \
                                                    \
    PREFIX##_t* PREFIX##_create(void)               \
    {                                               \
        PREFIX##_t* m = malloc(sizeof(*m));         \
        if (!m) {                                   \
            goto error;                             \
        }                                           \
                                                    \
        m->cap = INITIAL_CAPACITY;                  \
        m->size = 0;                                \
        m->used = NULL;                             \
        m->set = calloc(m->cap, sizeof(*m->set));\
        if (!m->set) {\
            goto error;\
        }\
        return m;\
    error:\
        PREFIX##_free(m);\
        return NULL;\
    }\
    \
    void PREFIX##_free(PREFIX##_t* m)\
    {\
        if (m) {\
            entry_t* iter = m->used;\
            for (; iter;) {\
                entry_t* t = iter;\
                iter = iter->next;\
                free(t);\
            }\
    \
            free(m->set);\
            free(m);\
        }\
    }\
    \
    uint32_t PREFIX##_size(PREFIX##_t* m) { return m->size; }\
    \
    uint32_t PREFIX##_capacity(PREFIX##_t* m) { return m->cap * MAX_LOAD_FACTOR; }\
    \
    int PREFIX##_reserve(PREFIX##_t* m, uint32_t to_reserve)\
    {\
        if (PREFIX##_capacity(m) < to_reserve) {\
            return realloc_and_rehash(m, to_reserve / MAX_LOAD_FACTOR + 1);\
        }\
        return 0;\
    }\
    \
    int PREFIX##_shrink_to_fit(PREFIX##_t* m)\
    {\
        return realloc_and_rehash(m, m->size / FIT_LOAD_FACTOR);\
    }\
    \
    int PREFIX##_update_key(PREFIX##_t* m, KEY_TYPE key)\
    {\
        entry_t** n = PREFIX##_pos(m, key, HASH(key));\
        if (!*n) {\
            return 1;\
        }\
        (*n)->key = key;\
        return 0;\
    }\
    \
    KEY_TYPE* PREFIX##_get_key(PREFIX##_t* m, KEY_TYPE key)\
    {\
        entry_t** n = PREFIX##_pos(m, key, HASH(key));\
        return *n ? &(*n)->key : NULL;\
    }\
    \
    int PREFIX##_insert(PREFIX##_t* m, KEY_TYPE key)\
    {\
        uint32_t hash = HASH(key);\
        entry_t** n = PREFIX##_pos(m, key, hash);\
        int err = 0;\
        if (!*n) {\
            err = entry_create_at(m, n, key, hash) == NULL;\
        }\
        return err;\
    }\
    \
    int PREFIX##_remove(PREFIX##_t* m, KEY_TYPE key)\
    {\
        entry_t** n = PREFIX##_pos(m, key, HASH(key));\
        if (!*n) {\
            return 1;\
        }\
        entry_remove_at(m, n);\
    \
        if (m->size <= m->cap * MIN_LOAD_FACTOR) {\
            if (m->size == 0) {\
                return realloc_and_rehash(m, INITIAL_CAPACITY);\
            } else {\
                return PREFIX##_shrink_to_fit(m);\
            }\
        }\
    \
        return 0;\
    }\
    \
    int PREFIX##_move_pair(PREFIX##_t* m, KEY_TYPE key, KEY_TYPE* dest_key)\
    {\
        entry_t** n = PREFIX##_pos(m, key, HASH(key));\
        if (!*n) {\
            return 1;\
        }\
        if (dest_key) {\
            *dest_key = (*n)->key;\
        }\
    \
        int err = entry_remove_at(m, n);\
        if (err) {\
            return err;\
        }\
    \
        return 0;\
    }\
    \
    uintptr_t PREFIX##_begin(PREFIX##_t* m) { return (uintptr_t)m->used; }\
    \
    uintptr_t PREFIX##_end(PREFIX##_t* m) { return (uintptr_t)NULL; }\
    \
    uintptr_t PREFIX##_next(PREFIX##_t* m, uintptr_t iter)\
    {\
        return (uintptr_t)((entry_t*)iter)->next;\
    }\
    \
    KEY_TYPE* PREFIX##_iter_key(PREFIX##_t* m, uintptr_t iter) { return &((entry_t*)iter)->key; }\
    \
    bool PREFIX##_contains(PREFIX##_t* m, KEY_TYPE key)\
    {\
        return *PREFIX##_pos(m, key, HASH(key)) != NULL;\
    }\

#endif // MAKE_SET_H
