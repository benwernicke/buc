#include "v.h"

static uint32_t fnv_hash(char* s)
{
    uintptr_t h = 2166136261;
    for (; *s; s++) {
        h *= 16777619;
        h ^= *s;
    }
    return h;
}

static bool is_eq_str(char* a, char* b) { return strcmp(a, b) == 0; }

MAKE_MAP_IMPLEMENTATION(map, char*, uint32_t, fnv_hash, is_eq_str, 4, 2, .75f, .5f, .25f)
