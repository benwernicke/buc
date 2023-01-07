#ifndef SET_H
#define SET_H

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef struct set_t set_t;

#define INITIAL_CAPACITY 4
#define GROWTH_FACTOR 2
#define MAX_LOAD_FACTOR 0.75f
#define MIN_LOAD_FACTOR 0.25f
#define FIT_LOAD_FACTOR 0.5f

#define HASH fnv_hash
#define ISEQ is_eq_str

set_t* set_create(void);
void set_free(set_t* m);

uint32_t set_size(set_t* m);
uint32_t set_capacity(set_t* m);
uint32_t set_max_size(set_t* m);
bool set_contains(set_t* m, char* key);

int set_reserve(set_t* m, uint32_t to_reserve);
int set_shrink_to_fit(set_t* m);

int set_update_key(set_t* m, char* key);
char** set_get_key(set_t* m, char* key);

int set_insert(set_t* m, char* key);
int set_remove(set_t* m, char* key);
int set_move_key(set_t* m, char* key, char** dest_key);

uintptr_t set_begin(set_t* m);
uintptr_t set_end(set_t* m);
uintptr_t set_next(set_t* m, uintptr_t iter);
char** set_iter_key(set_t* m, uintptr_t iter);

#endif // SET_H
