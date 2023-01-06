#include "map.h"

uint32_t u64_hash(uint64_t a) { return (uint32_t)a; }
bool u64_eq(uint64_t a, uint64_t b) { return a == b; }

MAKE_MAP_IMPLEMENTATION(
    map, uint64_t, uint32_t, u64_hash, u64_eq, 4, 2, 0.75f, 0.5f, 0.25f)
