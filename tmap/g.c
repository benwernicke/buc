#include "map.h"

#include <assert.h>

typedef uint8_t color_t;
typedef uint8_t dir_t;

#define LEFT  0
#define RIGHT 1

#define BLACK 0
#define RED   1

static uint32_t fnv_hash(char* s)
{
    uintptr_t h = 2166136261;
    for (; *s; s++) {
        h *= 16777619;
        h ^= *s;
    }
    return h;
}

#define HASH(k) fnv_hash(k)

typedef struct node_t node_t;
struct node_t {
    node_t* parent;
    node_t* child[2];



    char* key;
    uint32_t val;
    uint32_t hash;
    node_t* next;

    color_t color;
};

struct map_t {
    node_t* root;
    uint32_t sz;
    node_t* begin;
};

int comp(char* ak, uint32_t ah, char* bk, uint32_t bh)
{
    if (ah == bh) return strcmp(ak, bk);
    return ah < bh ? -1 : 1;
}

static node_t* node_create(map_t* m, char* key, uint32_t hash, uint32_t val)
{
    node_t* n = calloc(1, sizeof(*n));
    n->next = m->begin;
    m->begin = n;
    m->sz += 1;


    n->key = key;
    n->val = val;
    n->hash = hash;

    return n;
}

#define child_dir(N) ( N == N->parent->child[RIGHT] ? RIGHT : LEFT )

static node_t* rotate(map_t* t, node_t* p, dir_t dir)
{
    node_t* g = p->parent;
    node_t* s = p->child[1 - dir];
    assert(s);
    node_t* c = s->child[dir];

    p->child[1 - dir] = c; 
    if (c) c->parent = p;
    s->child[dir] = p;
    p->parent = s;
    s->parent = g;

    if (g) {
        g->child[p == g->child[RIGHT] ? RIGHT : LEFT ] = s;
    } else {
        t->root = s;
    }
    return s;
}

static void node_free(node_t* n)
{
    if (!n) return;
    node_free(n->child[LEFT]);
    node_free(n->child[RIGHT]);
    free(n);
}

static void node_insert(map_t* t, node_t* n, node_t* p, dir_t dir)
{
    node_t* g; // grandparent
    node_t* u; // uncle
    
    n->color = RED;
    n->parent = p;

    if (!p) {
        t->root = n;
        return;
    }

    p->child[dir] = n;

    do {
        if (p->color == BLACK) {
            return;
        }
        // p must be red -> violation
        g = p->parent;
        if (!g) {
            goto case_i4;
        }
        dir = child_dir(p);
        u   = g->child[1 - dir];

        // uncle is leaf or black
        if (!u || u->color == BLACK) {
            goto case_i56;
        }

        p->color = BLACK;
        u->color = BLACK;
        g->color = RED;
        n = g;
        p = n->parent;
    } while (p);
    return;

case_i4:
    p->color = BLACK;
    return;

case_i56:
    if ( n == p->child[1 - dir] ) {
        rotate(t, p, dir);
        n = p;
        p = g->child[dir];
    }

    rotate(t, g, 1 - dir);
    p->color = BLACK;
    g->color = RED;
    return;
}

static void node_get(node_t* n, char* key, uint32_t hash, node_t** p_, node_t** c_, dir_t* dir_)
{
    int comp_ = comp(n->key, n->hash, key, hash);
    if (comp_ == 0) {
        *p_   = n->parent;
        *c_   = n;
        *dir_ = -1;
        return;
    }

    dir_t dir = comp_ < 0 ? LEFT : RIGHT;
    node_t* c = n->child[dir];

    if (c) {
        node_get(c, key, hash, p_, c_, dir_);
        return;
    } 

    *p_   = n;
    *c_   = c;
    *dir_ = dir;
    return;
}

map_t* map_create(void)
{
    return calloc(1, sizeof(map_t));
}

void map_free(map_t* m)
{
    if (!m) return;
    node_free(m->root);
    free(m);
}

uint32_t map_size(map_t* m) { return m->sz; }

bool map_contains(map_t* m, char* key) 
{
    node_t* p;
    node_t* n;
    dir_t   d;
    node_get(m->root, key, HASH(key), &p, &n, &d);
    return n != NULL;
}

int map_update_key(map_t* m, char* key)
{
    node_t* p;
    node_t* n;
    dir_t   d;
    node_get(m->root, key, HASH(key), &p, &n, &d);

    if (!n) return 1;
    n->key = key;
    return 0;
}

char** map_get_key(map_t* m, char* key)
{
    node_t* p;
    node_t* n;
    dir_t   d;
    node_get(m->root, key, HASH(key), &p, &n, &d);
    return n ? &n->key : NULL;
}

int map_insert(map_t* m, char* key, uint32_t val)
{
    uint32_t hash = HASH(key);
    if (!m->root) {
        m->root = node_create(m, key, hash, val);
        return 0;
    }

    node_t* p;
    node_t* n;
    dir_t   d;
    node_get(m->root, key, hash, &p, &n, &d);

    if (n) {
        n->val = val;
        return 0;
    } else {
        n = node_create(m, key, hash, val);
        node_insert(m, n, p, d);
        return 0;
    }
}

int map_remove(map_t* m, char* key) { return 0; }
int map_move_pair(map_t* m, char* key, char** dest_key, uint32_t* dest_val) { return 0; }
int map_copy_pair(map_t* m, char* key, char** dest_key, uint32_t* dest_val) { return 0; }

uint32_t* map_get(map_t* m, char* key)
{
    node_t* p;
    node_t* n;
    dir_t   d;
    node_get(m->root, key, HASH(key), &p, &n, &d);

    return n ? &n->val : NULL;
}

uint32_t* map_get_or_insert(map_t* m, char* key, uint32_t val)
{
    uint32_t hash = HASH(key);

    if (!m->root) {
        m->root = node_create(m, key, hash, val);
        return &m->root->val;
    }

    node_t* p;
    node_t* n;
    dir_t   d;
    node_get(m->root, key, hash, &p, &n, &d);

    if (!n) {
        n = node_create(m, key, hash, val);
        node_insert(m, n, p, d);
    } 
    return &n->val;
}

uintptr_t map_begin(map_t* m) { return (uintptr_t)m->begin; }
uintptr_t map_end(map_t* m) { return 0; }
uintptr_t map_next(map_t* m, uintptr_t iter) { return (uintptr_t)((node_t*)iter)->next; }
char** map_iter_key(map_t* m, uintptr_t iter) { return &((node_t*)iter)->key; }
uint32_t* map_iter_value(map_t* m, uintptr_t iter) { return &((node_t*)iter)->val; }
