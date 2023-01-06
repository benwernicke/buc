#include "map.h"

uint32_t fnv_hash(char* s)
{
    uint32_t h = 97;
    for (; *s; ++s) {
        h *= 103;
        h ^= *s;
    }
    return h;
}

bool cstr_is_eq(char* a, char* b) { return strcmp(a, b) == 0; }

MAKE_MAP_IMPLEMENTATION(
    map, char*, uint32_t, fnv_hash, cstr_is_eq, 4, 2, 0.75f, 0.5f, 0.25f)
