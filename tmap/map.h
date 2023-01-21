#ifndef MAP_H
#define MAP_H

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef struct map_t map_t;

map_t* map_create(void);
void map_free(map_t* m);

uint32_t map_size(map_t* m);
bool map_contains(map_t* m, char* key);
int map_update_key(map_t* m, char* key);
char** map_get_key(map_t* m, char* key);

int map_insert(map_t* m, char* key, uint32_t val);
int map_remove(map_t* m, char* key);
int map_move_pair(map_t* m, char* key, char** dest_key, uint32_t* dest_val);
int map_copy_pair(map_t* m, char* key, char** dest_key, uint32_t* dest_val);

uint32_t* map_get(map_t* m, char* key);
uint32_t* map_get_or_insert(map_t* m, char* key, uint32_t val);

uintptr_t map_begin(map_t* m);
uintptr_t map_end(map_t* m);
uintptr_t map_next(map_t* m, uintptr_t iter);
char** map_iter_key(map_t* m, uintptr_t iter);
uint32_t* map_iter_value(map_t* m, uintptr_t iter);

#endif // MAP_H
