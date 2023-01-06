#include "map.h"

#include <assert.h>
#include <stdio.h>

#define TEST_START()                                                           \
    do {                                                                       \
        printf("[test] %s:\n", __func__);                                      \
    } while (0)

#define TEST_END()                                                             \
    do {                                                                       \
        printf("\tok\n");                                                      \
    } while (0)

void contains(void)
{
    TEST_START();
    map_t* m = map_create();

    assert(map_insert(m, 0, 0) == 0);
    assert(map_insert(m, 1, 1) == 0);
    assert(map_insert(m, 2, 2) == 0);
    assert(map_insert(m, 3, 3) == 0);
    assert(map_insert(m, 4, 4) == 0);
    assert(map_insert(m, 5, 5) == 0);
    assert(map_insert(m, 6, 6) == 0);
    assert(map_insert(m, 7, 7) == 0);
    assert(map_insert(m, 8, 8) == 0);
    assert(map_insert(m, 9, 9) == 0);
    assert(map_insert(m, 10, 10) == 0);
    assert(map_insert(m, 11, 11) == 0);
    assert(map_insert(m, 12, 12) == 0);
    assert(map_insert(m, 13, 13) == 0);
    assert(map_insert(m, 14, 14) == 0);
    assert(map_insert(m, 15, 15) == 0);
    assert(map_insert(m, 16, 16) == 0);
    assert(map_insert(m, 17, 17) == 0);
    assert(map_insert(m, 18, 18) == 0);
    assert(map_insert(m, 19, 19) == 0);
    assert(map_insert(m, 20, 20) == 0);
    assert(map_insert(m, 21, 21) == 0);
    assert(map_insert(m, 22, 22) == 0);
    assert(map_insert(m, 23, 23) == 0);
    assert(map_insert(m, 24, 24) == 0);
    assert(map_insert(m, 25, 25) == 0);
    assert(map_insert(m, 26, 26) == 0);
    assert(map_insert(m, 27, 27) == 0);
    assert(map_insert(m, 28, 28) == 0);
    assert(map_insert(m, 29, 29) == 0);
    assert(map_insert(m, 30, 30) == 0);
    assert(map_insert(m, 31, 31) == 0);
    assert(map_insert(m, 32, 32) == 0);
    assert(map_insert(m, 33, 33) == 0);
    assert(map_insert(m, 34, 34) == 0);
    assert(map_insert(m, 35, 35) == 0);
    assert(map_insert(m, 36, 36) == 0);
    assert(map_insert(m, 37, 37) == 0);
    assert(map_insert(m, 38, 38) == 0);
    assert(map_insert(m, 39, 39) == 0);
    assert(map_insert(m, 40, 40) == 0);
    assert(map_insert(m, 41, 41) == 0);
    assert(map_insert(m, 42, 42) == 0);
    assert(map_insert(m, 43, 43) == 0);
    assert(map_insert(m, 44, 44) == 0);
    assert(map_insert(m, 45, 45) == 0);
    assert(map_insert(m, 46, 46) == 0);
    assert(map_insert(m, 47, 47) == 0);
    assert(map_insert(m, 48, 48) == 0);
    assert(map_insert(m, 49, 49) == 0);

    assert(map_contains(m, 0));
    assert(map_contains(m, 1));
    assert(map_contains(m, 2));
    assert(map_contains(m, 3));
    assert(map_contains(m, 4));
    assert(map_contains(m, 5));
    assert(map_contains(m, 6));
    assert(map_contains(m, 7));
    assert(map_contains(m, 8));
    assert(map_contains(m, 9));
    assert(map_contains(m, 10));
    assert(map_contains(m, 11));
    assert(map_contains(m, 12));
    assert(map_contains(m, 13));
    assert(map_contains(m, 14));
    assert(map_contains(m, 15));
    assert(map_contains(m, 16));
    assert(map_contains(m, 17));
    assert(map_contains(m, 18));
    assert(map_contains(m, 19));
    assert(map_contains(m, 20));
    assert(map_contains(m, 21));
    assert(map_contains(m, 22));
    assert(map_contains(m, 23));
    assert(map_contains(m, 24));
    assert(map_contains(m, 25));
    assert(map_contains(m, 26));
    assert(map_contains(m, 27));
    assert(map_contains(m, 28));
    assert(map_contains(m, 29));
    assert(map_contains(m, 30));
    assert(map_contains(m, 31));
    assert(map_contains(m, 32));
    assert(map_contains(m, 33));
    assert(map_contains(m, 34));
    assert(map_contains(m, 35));
    assert(map_contains(m, 36));
    assert(map_contains(m, 37));
    assert(map_contains(m, 38));
    assert(map_contains(m, 39));
    assert(map_contains(m, 40));
    assert(map_contains(m, 41));
    assert(map_contains(m, 42));
    assert(map_contains(m, 43));
    assert(map_contains(m, 44));
    assert(map_contains(m, 45));
    assert(map_contains(m, 46));
    assert(map_contains(m, 47));
    assert(map_contains(m, 48));
    assert(map_contains(m, 49));

    map_free(m);
    TEST_END();
}

void iter(void)
{
    TEST_START();
    map_t* m = map_create();

    assert(map_insert(m, 0, 0) == 0);
    assert(map_insert(m, 1, 1) == 0);
    assert(map_insert(m, 2, 2) == 0);
    assert(map_insert(m, 3, 3) == 0);
    assert(map_insert(m, 4, 4) == 0);
    assert(map_insert(m, 5, 5) == 0);
    assert(map_insert(m, 6, 6) == 0);
    assert(map_insert(m, 7, 7) == 0);
    assert(map_insert(m, 8, 8) == 0);
    assert(map_insert(m, 9, 9) == 0);
    assert(map_insert(m, 10, 10) == 0);
    assert(map_insert(m, 11, 11) == 0);
    assert(map_insert(m, 12, 12) == 0);
    assert(map_insert(m, 13, 13) == 0);
    assert(map_insert(m, 14, 14) == 0);
    assert(map_insert(m, 15, 15) == 0);
    assert(map_insert(m, 16, 16) == 0);
    assert(map_insert(m, 17, 17) == 0);
    assert(map_insert(m, 18, 18) == 0);
    assert(map_insert(m, 19, 19) == 0);
    assert(map_insert(m, 20, 20) == 0);
    assert(map_insert(m, 21, 21) == 0);
    assert(map_insert(m, 22, 22) == 0);
    assert(map_insert(m, 23, 23) == 0);
    assert(map_insert(m, 24, 24) == 0);
    assert(map_insert(m, 25, 25) == 0);
    assert(map_insert(m, 26, 26) == 0);
    assert(map_insert(m, 27, 27) == 0);
    assert(map_insert(m, 28, 28) == 0);
    assert(map_insert(m, 29, 29) == 0);
    assert(map_insert(m, 30, 30) == 0);
    assert(map_insert(m, 31, 31) == 0);
    assert(map_insert(m, 32, 32) == 0);
    assert(map_insert(m, 33, 33) == 0);
    assert(map_insert(m, 34, 34) == 0);
    assert(map_insert(m, 35, 35) == 0);
    assert(map_insert(m, 36, 36) == 0);
    assert(map_insert(m, 37, 37) == 0);
    assert(map_insert(m, 38, 38) == 0);
    assert(map_insert(m, 39, 39) == 0);
    assert(map_insert(m, 40, 40) == 0);
    assert(map_insert(m, 41, 41) == 0);
    assert(map_insert(m, 42, 42) == 0);
    assert(map_insert(m, 43, 43) == 0);
    assert(map_insert(m, 44, 44) == 0);
    assert(map_insert(m, 45, 45) == 0);
    assert(map_insert(m, 46, 46) == 0);
    assert(map_insert(m, 47, 47) == 0);
    assert(map_insert(m, 48, 48) == 0);
    assert(map_insert(m, 49, 49) == 0);

    uint64_t keys[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
        16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33,
        34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49 };

    uint32_t values[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
        16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33,
        34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49 };

    uintptr_t i = map_begin(m);
    const uintptr_t end = map_end(m);

    for (; i != end; i = map_next(m, i)) {
        assert(map_iter_key(m, i) != NULL);
        assert(map_iter_value(m, i) != NULL);
        uint64_t* ki = keys;
        uint64_t* const ke = keys + 50;
        for (; ki != ke; ++ki) {
            if (*ki != -1 && *ki == *map_iter_key(m, i)) {
                *ki = -1;
                break;
            }
        }
        assert(ki != ke);
        uint32_t* vi = values;
        uint32_t* const ve = values + 50;
        for (; vi != ve; ++vi) {
            if (*vi == *map_iter_value(m, i)) {
                *vi = -1;
                break;
            }
        }
        assert(vi != ve);
    }

    map_free(m);
    TEST_END();
}

void copy_pair(void)
{
    TEST_START();
    map_t* m = map_create();

    assert(map_insert(m, 0, 0) == 0);
    assert(map_insert(m, 1, 1) == 0);
    assert(map_insert(m, 2, 2) == 0);
    assert(map_insert(m, 3, 3) == 0);
    assert(map_insert(m, 4, 4) == 0);
    assert(map_insert(m, 5, 5) == 0);
    assert(map_insert(m, 6, 6) == 0);
    assert(map_insert(m, 7, 7) == 0);
    assert(map_insert(m, 8, 8) == 0);
    assert(map_insert(m, 9, 9) == 0);
    assert(map_insert(m, 10, 10) == 0);
    assert(map_insert(m, 11, 11) == 0);
    assert(map_insert(m, 12, 12) == 0);
    assert(map_insert(m, 13, 13) == 0);
    assert(map_insert(m, 14, 14) == 0);
    assert(map_insert(m, 15, 15) == 0);
    assert(map_insert(m, 16, 16) == 0);
    assert(map_insert(m, 17, 17) == 0);
    assert(map_insert(m, 18, 18) == 0);
    assert(map_insert(m, 19, 19) == 0);
    assert(map_insert(m, 20, 20) == 0);
    assert(map_insert(m, 21, 21) == 0);
    assert(map_insert(m, 22, 22) == 0);
    assert(map_insert(m, 23, 23) == 0);
    assert(map_insert(m, 24, 24) == 0);
    assert(map_insert(m, 25, 25) == 0);
    assert(map_insert(m, 26, 26) == 0);
    assert(map_insert(m, 27, 27) == 0);
    assert(map_insert(m, 28, 28) == 0);
    assert(map_insert(m, 29, 29) == 0);
    assert(map_insert(m, 30, 30) == 0);
    assert(map_insert(m, 31, 31) == 0);
    assert(map_insert(m, 32, 32) == 0);
    assert(map_insert(m, 33, 33) == 0);
    assert(map_insert(m, 34, 34) == 0);
    assert(map_insert(m, 35, 35) == 0);
    assert(map_insert(m, 36, 36) == 0);
    assert(map_insert(m, 37, 37) == 0);
    assert(map_insert(m, 38, 38) == 0);
    assert(map_insert(m, 39, 39) == 0);
    assert(map_insert(m, 40, 40) == 0);
    assert(map_insert(m, 41, 41) == 0);
    assert(map_insert(m, 42, 42) == 0);
    assert(map_insert(m, 43, 43) == 0);
    assert(map_insert(m, 44, 44) == 0);
    assert(map_insert(m, 45, 45) == 0);
    assert(map_insert(m, 46, 46) == 0);
    assert(map_insert(m, 47, 47) == 0);
    assert(map_insert(m, 48, 48) == 0);
    assert(map_insert(m, 49, 49) == 0);

    uint64_t dest_key;
    uint32_t dest_val;

    assert(map_copy_pair(m, 0, &dest_key, &dest_val) == 0);
    assert(map_get(m, 0) != NULL);
    assert(0 == dest_key);
    assert(0 == dest_val);

    assert(map_copy_pair(m, 1, &dest_key, &dest_val) == 0);
    assert(map_get(m, 1) != NULL);
    assert(1 == dest_key);
    assert(1 == dest_val);

    assert(map_copy_pair(m, 2, &dest_key, &dest_val) == 0);
    assert(map_get(m, 2) != NULL);
    assert(2 == dest_key);
    assert(dest_val == 2);

    assert(map_copy_pair(m, 3, &dest_key, &dest_val) == 0);
    assert(map_get(m, 3) != NULL);
    assert(3 == dest_key);
    assert(dest_val == 3);

    assert(map_copy_pair(m, 4, &dest_key, &dest_val) == 0);
    assert(map_get(m, 4) != NULL);
    assert(4 == dest_key);
    assert(dest_val == 4);

    assert(map_copy_pair(m, 5, &dest_key, &dest_val) == 0);
    assert(map_get(m, 5) != NULL);
    assert(5 == dest_key);
    assert(dest_val == 5);

    assert(map_copy_pair(m, 6, &dest_key, &dest_val) == 0);
    assert(map_get(m, 6) != NULL);
    assert(6 == dest_key);
    assert(dest_val == 6);

    assert(map_copy_pair(m, 7, &dest_key, &dest_val) == 0);
    assert(map_get(m, 7) != NULL);
    assert(7 == dest_key);
    assert(dest_val == 7);

    assert(map_copy_pair(m, 8, &dest_key, &dest_val) == 0);
    assert(map_get(m, 8) != NULL);
    assert(8 == dest_key);
    assert(dest_val == 8);

    assert(map_copy_pair(m, 9, &dest_key, &dest_val) == 0);
    assert(map_get(m, 9) != NULL);
    assert(9 == dest_key);
    assert(dest_val == 9);

    assert(map_copy_pair(m, 10, &dest_key, &dest_val) == 0);
    assert(map_get(m, 10) != NULL);
    assert(10 == dest_key);
    assert(dest_val == 10);

    assert(map_copy_pair(m, 11, &dest_key, &dest_val) == 0);
    assert(map_get(m, 11) != NULL);
    assert(11 == dest_key);
    assert(dest_val == 11);

    assert(map_copy_pair(m, 12, &dest_key, &dest_val) == 0);
    assert(map_get(m, 12) != NULL);
    assert(12 == dest_key);
    assert(dest_val == 12);

    assert(map_copy_pair(m, 13, &dest_key, &dest_val) == 0);
    assert(map_get(m, 13) != NULL);
    assert(13 == dest_key);
    assert(dest_val == 13);

    assert(map_copy_pair(m, 14, &dest_key, &dest_val) == 0);
    assert(map_get(m, 14) != NULL);
    assert(14 == dest_key);
    assert(dest_val == 14);

    assert(map_copy_pair(m, 15, &dest_key, &dest_val) == 0);
    assert(map_get(m, 15) != NULL);
    assert(15 == dest_key);
    assert(dest_val == 15);

    assert(map_copy_pair(m, 16, &dest_key, &dest_val) == 0);
    assert(map_get(m, 16) != NULL);
    assert(16 == dest_key);
    assert(dest_val == 16);

    assert(map_copy_pair(m, 17, &dest_key, &dest_val) == 0);
    assert(map_get(m, 17) != NULL);
    assert(17 == dest_key);
    assert(dest_val == 17);

    assert(map_copy_pair(m, 18, &dest_key, &dest_val) == 0);
    assert(map_get(m, 18) != NULL);
    assert(18 == dest_key);
    assert(dest_val == 18);

    assert(map_copy_pair(m, 19, &dest_key, &dest_val) == 0);
    assert(map_get(m, 19) != NULL);
    assert(19 == dest_key);
    assert(dest_val == 19);

    assert(map_copy_pair(m, 20, &dest_key, &dest_val) == 0);
    assert(map_get(m, 20) != NULL);
    assert(20 == dest_key);
    assert(dest_val == 20);

    assert(map_copy_pair(m, 21, &dest_key, &dest_val) == 0);
    assert(map_get(m, 21) != NULL);
    assert(21 == dest_key);
    assert(dest_val == 21);

    assert(map_copy_pair(m, 22, &dest_key, &dest_val) == 0);
    assert(map_get(m, 22) != NULL);
    assert(22 == dest_key);
    assert(dest_val == 22);

    assert(map_copy_pair(m, 23, &dest_key, &dest_val) == 0);
    assert(map_get(m, 23) != NULL);
    assert(23 == dest_key);
    assert(dest_val == 23);

    assert(map_copy_pair(m, 24, &dest_key, &dest_val) == 0);
    assert(map_get(m, 24) != NULL);
    assert(24 == dest_key);
    assert(dest_val == 24);

    assert(map_copy_pair(m, 25, &dest_key, &dest_val) == 0);
    assert(map_get(m, 25) != NULL);
    assert(25 == dest_key);
    assert(dest_val == 25);

    assert(map_copy_pair(m, 26, &dest_key, &dest_val) == 0);
    assert(map_get(m, 26) != NULL);
    assert(26 == dest_key);
    assert(dest_val == 26);

    assert(map_copy_pair(m, 27, &dest_key, &dest_val) == 0);
    assert(map_get(m, 27) != NULL);
    assert(27 == dest_key);
    assert(dest_val == 27);

    assert(map_copy_pair(m, 28, &dest_key, &dest_val) == 0);
    assert(map_get(m, 28) != NULL);
    assert(28 == dest_key);
    assert(dest_val == 28);

    assert(map_copy_pair(m, 29, &dest_key, &dest_val) == 0);
    assert(map_get(m, 29) != NULL);
    assert(29 == dest_key);
    assert(dest_val == 29);

    assert(map_copy_pair(m, 30, &dest_key, &dest_val) == 0);
    assert(map_get(m, 30) != NULL);
    assert(30 == dest_key);
    assert(dest_val == 30);

    assert(map_copy_pair(m, 31, &dest_key, &dest_val) == 0);
    assert(map_get(m, 31) != NULL);
    assert(31 == dest_key);
    assert(dest_val == 31);

    assert(map_copy_pair(m, 32, &dest_key, &dest_val) == 0);
    assert(map_get(m, 32) != NULL);
    assert(32 == dest_key);
    assert(dest_val == 32);

    assert(map_copy_pair(m, 33, &dest_key, &dest_val) == 0);
    assert(map_get(m, 33) != NULL);
    assert(33 == dest_key);
    assert(dest_val == 33);

    assert(map_copy_pair(m, 34, &dest_key, &dest_val) == 0);
    assert(map_get(m, 34) != NULL);
    assert(34 == dest_key);
    assert(dest_val == 34);

    assert(map_copy_pair(m, 35, &dest_key, &dest_val) == 0);
    assert(map_get(m, 35) != NULL);
    assert(35 == dest_key);
    assert(dest_val == 35);

    assert(map_copy_pair(m, 36, &dest_key, &dest_val) == 0);
    assert(map_get(m, 36) != NULL);
    assert(36 == dest_key);
    assert(dest_val == 36);

    assert(map_copy_pair(m, 37, &dest_key, &dest_val) == 0);
    assert(map_get(m, 37) != NULL);
    assert(37 == dest_key);
    assert(dest_val == 37);

    assert(map_copy_pair(m, 38, &dest_key, &dest_val) == 0);
    assert(map_get(m, 38) != NULL);
    assert(38 == dest_key);
    assert(dest_val == 38);

    assert(map_copy_pair(m, 39, &dest_key, &dest_val) == 0);
    assert(map_get(m, 39) != NULL);
    assert(39 == dest_key);
    assert(dest_val == 39);

    assert(map_copy_pair(m, 40, &dest_key, &dest_val) == 0);
    assert(map_get(m, 40) != NULL);
    assert(40 == dest_key);
    assert(dest_val == 40);

    assert(map_copy_pair(m, 41, &dest_key, &dest_val) == 0);
    assert(map_get(m, 41) != NULL);
    assert(41 == dest_key);
    assert(dest_val == 41);

    assert(map_copy_pair(m, 42, &dest_key, &dest_val) == 0);
    assert(map_get(m, 42) != NULL);
    assert(42 == dest_key);
    assert(dest_val == 42);

    assert(map_copy_pair(m, 43, &dest_key, &dest_val) == 0);
    assert(map_get(m, 43) != NULL);
    assert(43 == dest_key);
    assert(dest_val == 43);

    assert(map_copy_pair(m, 44, &dest_key, &dest_val) == 0);
    assert(map_get(m, 44) != NULL);
    assert(44 == dest_key);
    assert(dest_val == 44);

    assert(map_copy_pair(m, 45, &dest_key, &dest_val) == 0);
    assert(map_get(m, 45) != NULL);
    assert(45 == dest_key);
    assert(dest_val == 45);

    assert(map_copy_pair(m, 46, &dest_key, &dest_val) == 0);
    assert(map_get(m, 46) != NULL);
    assert(46 == dest_key);
    assert(dest_val == 46);

    assert(map_copy_pair(m, 47, &dest_key, &dest_val) == 0);
    assert(map_get(m, 47) != NULL);
    assert(47 == dest_key);
    assert(dest_val == 47);

    assert(map_copy_pair(m, 48, &dest_key, &dest_val) == 0);
    assert(map_get(m, 48) != NULL);
    assert(48 == dest_key);
    assert(dest_val == 48);

    assert(map_copy_pair(m, 49, &dest_key, &dest_val) == 0);
    assert(map_get(m, 49) != NULL);
    assert(49 == dest_key);
    assert(dest_val == 49);

    assert(map_copy_pair(m, 0, NULL, &dest_val) == 0);
    assert(map_get(m, 0) != 0);
    assert(dest_val == 0);

    assert(map_copy_pair(m, 1, NULL, &dest_val) == 0);
    assert(map_get(m, 1) != 0);
    assert(dest_val == 1);

    assert(map_copy_pair(m, 2, NULL, &dest_val) == 0);
    assert(map_get(m, 2) != 0);
    assert(dest_val == 2);

    assert(map_copy_pair(m, 3, NULL, &dest_val) == 0);
    assert(map_get(m, 3) != 0);
    assert(dest_val == 3);

    assert(map_copy_pair(m, 4, NULL, &dest_val) == 0);
    assert(map_get(m, 4) != 0);
    assert(dest_val == 4);

    assert(map_copy_pair(m, 5, NULL, &dest_val) == 0);
    assert(map_get(m, 5) != 0);
    assert(dest_val == 5);

    assert(map_copy_pair(m, 6, NULL, &dest_val) == 0);
    assert(map_get(m, 6) != 0);
    assert(dest_val == 6);

    assert(map_copy_pair(m, 7, NULL, &dest_val) == 0);
    assert(map_get(m, 7) != 0);
    assert(dest_val == 7);

    assert(map_copy_pair(m, 8, NULL, &dest_val) == 0);
    assert(map_get(m, 8) != 0);
    assert(dest_val == 8);

    assert(map_copy_pair(m, 9, NULL, &dest_val) == 0);
    assert(map_get(m, 9) != 0);
    assert(dest_val == 9);

    assert(map_copy_pair(m, 10, NULL, &dest_val) == 0);
    assert(map_get(m, 10) != 0);
    assert(dest_val == 10);

    assert(map_copy_pair(m, 11, NULL, &dest_val) == 0);
    assert(map_get(m, 11) != 0);
    assert(dest_val == 11);

    assert(map_copy_pair(m, 12, NULL, &dest_val) == 0);
    assert(map_get(m, 12) != 0);
    assert(dest_val == 12);

    assert(map_copy_pair(m, 13, NULL, &dest_val) == 0);
    assert(map_get(m, 13) != 0);
    assert(dest_val == 13);

    assert(map_copy_pair(m, 14, NULL, &dest_val) == 0);
    assert(map_get(m, 14) != 0);
    assert(dest_val == 14);

    assert(map_copy_pair(m, 15, NULL, &dest_val) == 0);
    assert(map_get(m, 15) != 0);
    assert(dest_val == 15);

    assert(map_copy_pair(m, 16, NULL, &dest_val) == 0);
    assert(map_get(m, 16) != 0);
    assert(dest_val == 16);

    assert(map_copy_pair(m, 17, NULL, &dest_val) == 0);
    assert(map_get(m, 17) != 0);
    assert(dest_val == 17);

    assert(map_copy_pair(m, 18, NULL, &dest_val) == 0);
    assert(map_get(m, 18) != 0);
    assert(dest_val == 18);

    assert(map_copy_pair(m, 19, NULL, &dest_val) == 0);
    assert(map_get(m, 19) != 0);
    assert(dest_val == 19);

    assert(map_copy_pair(m, 20, NULL, &dest_val) == 0);
    assert(map_get(m, 20) != 0);
    assert(dest_val == 20);

    assert(map_copy_pair(m, 21, NULL, &dest_val) == 0);
    assert(map_get(m, 21) != 0);
    assert(dest_val == 21);

    assert(map_copy_pair(m, 22, NULL, &dest_val) == 0);
    assert(map_get(m, 22) != 0);
    assert(dest_val == 22);

    assert(map_copy_pair(m, 23, NULL, &dest_val) == 0);
    assert(map_get(m, 23) != 0);
    assert(dest_val == 23);

    assert(map_copy_pair(m, 24, NULL, &dest_val) == 0);
    assert(map_get(m, 24) != 0);
    assert(dest_val == 24);

    assert(map_copy_pair(m, 25, NULL, &dest_val) == 0);
    assert(map_get(m, 25) != 0);
    assert(dest_val == 25);

    assert(map_copy_pair(m, 26, NULL, &dest_val) == 0);
    assert(map_get(m, 26) != 0);
    assert(dest_val == 26);

    assert(map_copy_pair(m, 27, NULL, &dest_val) == 0);
    assert(map_get(m, 27) != 0);
    assert(dest_val == 27);

    assert(map_copy_pair(m, 28, NULL, &dest_val) == 0);
    assert(map_get(m, 28) != 0);
    assert(dest_val == 28);

    assert(map_copy_pair(m, 29, NULL, &dest_val) == 0);
    assert(map_get(m, 29) != 0);
    assert(dest_val == 29);

    assert(map_copy_pair(m, 30, NULL, &dest_val) == 0);
    assert(map_get(m, 30) != 0);
    assert(dest_val == 30);

    assert(map_copy_pair(m, 31, NULL, &dest_val) == 0);
    assert(map_get(m, 31) != 0);
    assert(dest_val == 31);

    assert(map_copy_pair(m, 32, NULL, &dest_val) == 0);
    assert(map_get(m, 32) != 0);
    assert(dest_val == 32);

    assert(map_copy_pair(m, 33, NULL, &dest_val) == 0);
    assert(map_get(m, 33) != 0);
    assert(dest_val == 33);

    assert(map_copy_pair(m, 34, NULL, &dest_val) == 0);
    assert(map_get(m, 34) != 0);
    assert(dest_val == 34);

    assert(map_copy_pair(m, 35, NULL, &dest_val) == 0);
    assert(map_get(m, 35) != 0);
    assert(dest_val == 35);

    assert(map_copy_pair(m, 36, NULL, &dest_val) == 0);
    assert(map_get(m, 36) != 0);
    assert(dest_val == 36);

    assert(map_copy_pair(m, 37, NULL, &dest_val) == 0);
    assert(map_get(m, 37) != 0);
    assert(dest_val == 37);

    assert(map_copy_pair(m, 38, NULL, &dest_val) == 0);
    assert(map_get(m, 38) != 0);
    assert(dest_val == 38);

    assert(map_copy_pair(m, 39, NULL, &dest_val) == 0);
    assert(map_get(m, 39) != 0);
    assert(dest_val == 39);

    assert(map_copy_pair(m, 40, NULL, &dest_val) == 0);
    assert(map_get(m, 40) != 0);
    assert(dest_val == 40);

    assert(map_copy_pair(m, 41, NULL, &dest_val) == 0);
    assert(map_get(m, 41) != 0);
    assert(dest_val == 41);

    assert(map_copy_pair(m, 42, NULL, &dest_val) == 0);
    assert(map_get(m, 42) != 0);
    assert(dest_val == 42);

    assert(map_copy_pair(m, 43, NULL, &dest_val) == 0);
    assert(map_get(m, 43) != 0);
    assert(dest_val == 43);

    assert(map_copy_pair(m, 44, NULL, &dest_val) == 0);
    assert(map_get(m, 44) != 0);
    assert(dest_val == 44);

    assert(map_copy_pair(m, 45, NULL, &dest_val) == 0);
    assert(map_get(m, 45) != 0);
    assert(dest_val == 45);

    assert(map_copy_pair(m, 46, NULL, &dest_val) == 0);
    assert(map_get(m, 46) != 0);
    assert(dest_val == 46);

    assert(map_copy_pair(m, 47, NULL, &dest_val) == 0);
    assert(map_get(m, 47) != 0);
    assert(dest_val == 47);

    assert(map_copy_pair(m, 48, NULL, &dest_val) == 0);
    assert(map_get(m, 48) != 0);
    assert(dest_val == 48);

    assert(map_copy_pair(m, 49, NULL, &dest_val) == 0);
    assert(map_get(m, 49) != 0);
    assert(dest_val == 49);

    assert(map_copy_pair(m, 0, &dest_key, NULL) == 0);
    assert(map_get(m, 0) != 0);
    assert(0 == dest_key);

    assert(map_copy_pair(m, 1, &dest_key, NULL) == 0);
    assert(map_get(m, 1) != 0);
    assert(1 == dest_key);

    assert(map_copy_pair(m, 2, &dest_key, NULL) == 0);
    assert(map_get(m, 2) != 0);
    assert(2 == dest_key);

    assert(map_copy_pair(m, 3, &dest_key, NULL) == 0);
    assert(map_get(m, 3) != 0);
    assert(3 == dest_key);

    assert(map_copy_pair(m, 4, &dest_key, NULL) == 0);
    assert(map_get(m, 4) != 0);
    assert(4 == dest_key);

    assert(map_copy_pair(m, 5, &dest_key, NULL) == 0);
    assert(map_get(m, 5) != 0);
    assert(5 == dest_key);

    assert(map_copy_pair(m, 6, &dest_key, NULL) == 0);
    assert(map_get(m, 6) != 0);
    assert(6 == dest_key);

    assert(map_copy_pair(m, 7, &dest_key, NULL) == 0);
    assert(map_get(m, 7) != 0);
    assert(7 == dest_key);

    assert(map_copy_pair(m, 8, &dest_key, NULL) == 0);
    assert(map_get(m, 8) != 0);
    assert(8 == dest_key);

    assert(map_copy_pair(m, 9, &dest_key, NULL) == 0);
    assert(map_get(m, 9) != 0);
    assert(9 == dest_key);

    assert(map_copy_pair(m, 10, &dest_key, NULL) == 0);
    assert(map_get(m, 10) != 0);
    assert(10 == dest_key);

    assert(map_copy_pair(m, 11, &dest_key, NULL) == 0);
    assert(map_get(m, 11) != 0);
    assert(11 == dest_key);

    assert(map_copy_pair(m, 12, &dest_key, NULL) == 0);
    assert(map_get(m, 12) != 0);
    assert(12 == dest_key);

    assert(map_copy_pair(m, 13, &dest_key, NULL) == 0);
    assert(map_get(m, 13) != 0);
    assert(13 == dest_key);

    assert(map_copy_pair(m, 14, &dest_key, NULL) == 0);
    assert(map_get(m, 14) != 0);
    assert(14 == dest_key);

    assert(map_copy_pair(m, 15, &dest_key, NULL) == 0);
    assert(map_get(m, 15) != 0);
    assert(15 == dest_key);

    assert(map_copy_pair(m, 16, &dest_key, NULL) == 0);
    assert(map_get(m, 16) != 0);
    assert(16 == dest_key);

    assert(map_copy_pair(m, 17, &dest_key, NULL) == 0);
    assert(map_get(m, 17) != 0);
    assert(17 == dest_key);

    assert(map_copy_pair(m, 18, &dest_key, NULL) == 0);
    assert(map_get(m, 18) != 0);
    assert(18 == dest_key);

    assert(map_copy_pair(m, 19, &dest_key, NULL) == 0);
    assert(map_get(m, 19) != 0);
    assert(19 == dest_key);

    assert(map_copy_pair(m, 20, &dest_key, NULL) == 0);
    assert(map_get(m, 20) != 0);
    assert(20 == dest_key);

    assert(map_copy_pair(m, 21, &dest_key, NULL) == 0);
    assert(map_get(m, 21) != 0);
    assert(21 == dest_key);

    assert(map_copy_pair(m, 22, &dest_key, NULL) == 0);
    assert(map_get(m, 22) != 0);
    assert(22 == dest_key);

    assert(map_copy_pair(m, 23, &dest_key, NULL) == 0);
    assert(map_get(m, 23) != 0);
    assert(23 == dest_key);

    assert(map_copy_pair(m, 24, &dest_key, NULL) == 0);
    assert(map_get(m, 24) != 0);
    assert(24 == dest_key);

    assert(map_copy_pair(m, 25, &dest_key, NULL) == 0);
    assert(map_get(m, 25) != 0);
    assert(25 == dest_key);

    assert(map_copy_pair(m, 26, &dest_key, NULL) == 0);
    assert(map_get(m, 26) != 0);
    assert(26 == dest_key);

    assert(map_copy_pair(m, 27, &dest_key, NULL) == 0);
    assert(map_get(m, 27) != 0);
    assert(27 == dest_key);

    assert(map_copy_pair(m, 28, &dest_key, NULL) == 0);
    assert(map_get(m, 28) != 0);
    assert(28 == dest_key);

    assert(map_copy_pair(m, 29, &dest_key, NULL) == 0);
    assert(map_get(m, 29) != 0);
    assert(29 == dest_key);

    assert(map_copy_pair(m, 30, &dest_key, NULL) == 0);
    assert(map_get(m, 30) != 0);
    assert(30 == dest_key);

    assert(map_copy_pair(m, 31, &dest_key, NULL) == 0);
    assert(map_get(m, 31) != 0);
    assert(31 == dest_key);

    assert(map_copy_pair(m, 32, &dest_key, NULL) == 0);
    assert(map_get(m, 32) != 0);
    assert(32 == dest_key);

    assert(map_copy_pair(m, 33, &dest_key, NULL) == 0);
    assert(map_get(m, 33) != 0);
    assert(33 == dest_key);

    assert(map_copy_pair(m, 34, &dest_key, NULL) == 0);
    assert(map_get(m, 34) != 0);
    assert(34 == dest_key);

    assert(map_copy_pair(m, 35, &dest_key, NULL) == 0);
    assert(map_get(m, 35) != 0);
    assert(35 == dest_key);

    assert(map_copy_pair(m, 36, &dest_key, NULL) == 0);
    assert(map_get(m, 36) != 0);
    assert(36 == dest_key);

    assert(map_copy_pair(m, 37, &dest_key, NULL) == 0);
    assert(map_get(m, 37) != 0);
    assert(37 == dest_key);

    assert(map_copy_pair(m, 38, &dest_key, NULL) == 0);
    assert(map_get(m, 38) != 0);
    assert(38 == dest_key);

    assert(map_copy_pair(m, 39, &dest_key, NULL) == 0);
    assert(map_get(m, 39) != 0);
    assert(39 == dest_key);

    assert(map_copy_pair(m, 40, &dest_key, NULL) == 0);
    assert(map_get(m, 40) != 0);
    assert(40 == dest_key);

    assert(map_copy_pair(m, 41, &dest_key, NULL) == 0);
    assert(map_get(m, 41) != 0);
    assert(41 == dest_key);

    assert(map_copy_pair(m, 42, &dest_key, NULL) == 0);
    assert(map_get(m, 42) != 0);
    assert(42 == dest_key);

    assert(map_copy_pair(m, 43, &dest_key, NULL) == 0);
    assert(map_get(m, 43) != 0);
    assert(43 == dest_key);

    assert(map_copy_pair(m, 44, &dest_key, NULL) == 0);
    assert(map_get(m, 44) != 0);
    assert(44 == dest_key);

    assert(map_copy_pair(m, 45, &dest_key, NULL) == 0);
    assert(map_get(m, 45) != 0);
    assert(45 == dest_key);

    assert(map_copy_pair(m, 46, &dest_key, NULL) == 0);
    assert(map_get(m, 46) != 0);
    assert(46 == dest_key);

    assert(map_copy_pair(m, 47, &dest_key, NULL) == 0);
    assert(map_get(m, 47) != 0);
    assert(47 == dest_key);

    assert(map_copy_pair(m, 48, &dest_key, NULL) == 0);
    assert(map_get(m, 48) != 0);
    assert(48 == dest_key);

    assert(map_copy_pair(m, 49, &dest_key, NULL) == 0);
    assert(map_get(m, 49) != 0);
    assert(49 == dest_key);

    assert(map_copy_pair(m, 0, NULL, NULL) == 0);
    assert(map_get(m, 0) != NULL);

    assert(map_copy_pair(m, 1, NULL, NULL) == 0);
    assert(map_get(m, 1) != NULL);

    assert(map_copy_pair(m, 2, NULL, NULL) == 0);
    assert(map_get(m, 2) != NULL);

    assert(map_copy_pair(m, 3, NULL, NULL) == 0);
    assert(map_get(m, 3) != NULL);

    assert(map_copy_pair(m, 4, NULL, NULL) == 0);
    assert(map_get(m, 4) != NULL);

    assert(map_copy_pair(m, 5, NULL, NULL) == 0);
    assert(map_get(m, 5) != NULL);

    assert(map_copy_pair(m, 6, NULL, NULL) == 0);
    assert(map_get(m, 6) != NULL);

    assert(map_copy_pair(m, 7, NULL, NULL) == 0);
    assert(map_get(m, 7) != NULL);

    assert(map_copy_pair(m, 8, NULL, NULL) == 0);
    assert(map_get(m, 8) != NULL);

    assert(map_copy_pair(m, 9, NULL, NULL) == 0);
    assert(map_get(m, 9) != NULL);

    assert(map_copy_pair(m, 10, NULL, NULL) == 0);
    assert(map_get(m, 10) != NULL);

    assert(map_copy_pair(m, 11, NULL, NULL) == 0);
    assert(map_get(m, 11) != NULL);

    assert(map_copy_pair(m, 12, NULL, NULL) == 0);
    assert(map_get(m, 12) != NULL);

    assert(map_copy_pair(m, 13, NULL, NULL) == 0);
    assert(map_get(m, 13) != NULL);

    assert(map_copy_pair(m, 14, NULL, NULL) == 0);
    assert(map_get(m, 14) != NULL);

    assert(map_copy_pair(m, 15, NULL, NULL) == 0);
    assert(map_get(m, 15) != NULL);

    assert(map_copy_pair(m, 16, NULL, NULL) == 0);
    assert(map_get(m, 16) != NULL);

    assert(map_copy_pair(m, 17, NULL, NULL) == 0);
    assert(map_get(m, 17) != NULL);

    assert(map_copy_pair(m, 18, NULL, NULL) == 0);
    assert(map_get(m, 18) != NULL);

    assert(map_copy_pair(m, 19, NULL, NULL) == 0);
    assert(map_get(m, 19) != NULL);

    assert(map_copy_pair(m, 20, NULL, NULL) == 0);
    assert(map_get(m, 20) != NULL);

    assert(map_copy_pair(m, 21, NULL, NULL) == 0);
    assert(map_get(m, 21) != NULL);

    assert(map_copy_pair(m, 22, NULL, NULL) == 0);
    assert(map_get(m, 22) != NULL);

    assert(map_copy_pair(m, 23, NULL, NULL) == 0);
    assert(map_get(m, 23) != NULL);

    assert(map_copy_pair(m, 24, NULL, NULL) == 0);
    assert(map_get(m, 24) != NULL);

    assert(map_copy_pair(m, 25, NULL, NULL) == 0);
    assert(map_get(m, 25) != NULL);

    assert(map_copy_pair(m, 26, NULL, NULL) == 0);
    assert(map_get(m, 26) != NULL);

    assert(map_copy_pair(m, 27, NULL, NULL) == 0);
    assert(map_get(m, 27) != NULL);

    assert(map_copy_pair(m, 28, NULL, NULL) == 0);
    assert(map_get(m, 28) != NULL);

    assert(map_copy_pair(m, 29, NULL, NULL) == 0);
    assert(map_get(m, 29) != NULL);

    assert(map_copy_pair(m, 30, NULL, NULL) == 0);
    assert(map_get(m, 30) != NULL);

    assert(map_copy_pair(m, 31, NULL, NULL) == 0);
    assert(map_get(m, 31) != NULL);

    assert(map_copy_pair(m, 32, NULL, NULL) == 0);
    assert(map_get(m, 32) != NULL);

    assert(map_copy_pair(m, 33, NULL, NULL) == 0);
    assert(map_get(m, 33) != NULL);

    assert(map_copy_pair(m, 34, NULL, NULL) == 0);
    assert(map_get(m, 34) != NULL);

    assert(map_copy_pair(m, 35, NULL, NULL) == 0);
    assert(map_get(m, 35) != NULL);

    assert(map_copy_pair(m, 36, NULL, NULL) == 0);
    assert(map_get(m, 36) != NULL);

    assert(map_copy_pair(m, 37, NULL, NULL) == 0);
    assert(map_get(m, 37) != NULL);

    assert(map_copy_pair(m, 38, NULL, NULL) == 0);
    assert(map_get(m, 38) != NULL);

    assert(map_copy_pair(m, 39, NULL, NULL) == 0);
    assert(map_get(m, 39) != NULL);

    assert(map_copy_pair(m, 40, NULL, NULL) == 0);
    assert(map_get(m, 40) != NULL);

    assert(map_copy_pair(m, 41, NULL, NULL) == 0);
    assert(map_get(m, 41) != NULL);

    assert(map_copy_pair(m, 42, NULL, NULL) == 0);
    assert(map_get(m, 42) != NULL);

    assert(map_copy_pair(m, 43, NULL, NULL) == 0);
    assert(map_get(m, 43) != NULL);

    assert(map_copy_pair(m, 44, NULL, NULL) == 0);
    assert(map_get(m, 44) != NULL);

    assert(map_copy_pair(m, 45, NULL, NULL) == 0);
    assert(map_get(m, 45) != NULL);

    assert(map_copy_pair(m, 46, NULL, NULL) == 0);
    assert(map_get(m, 46) != NULL);

    assert(map_copy_pair(m, 47, NULL, NULL) == 0);
    assert(map_get(m, 47) != NULL);

    assert(map_copy_pair(m, 48, NULL, NULL) == 0);
    assert(map_get(m, 48) != NULL);

    assert(map_copy_pair(m, 49, NULL, NULL) == 0);
    assert(map_get(m, 49) != NULL);

    map_free(m);
    TEST_END();
}

void move_pair(void)
{
    TEST_START();
    map_t* m = map_create();

    assert(map_insert(m, 0, 0) == 0);
    assert(map_insert(m, 1, 1) == 0);
    assert(map_insert(m, 2, 2) == 0);
    assert(map_insert(m, 3, 3) == 0);
    assert(map_insert(m, 4, 4) == 0);
    assert(map_insert(m, 5, 5) == 0);
    assert(map_insert(m, 6, 6) == 0);
    assert(map_insert(m, 7, 7) == 0);
    assert(map_insert(m, 8, 8) == 0);
    assert(map_insert(m, 9, 9) == 0);
    assert(map_insert(m, 10, 10) == 0);
    assert(map_insert(m, 11, 11) == 0);
    assert(map_insert(m, 12, 12) == 0);
    assert(map_insert(m, 13, 13) == 0);
    assert(map_insert(m, 14, 14) == 0);
    assert(map_insert(m, 15, 15) == 0);
    assert(map_insert(m, 16, 16) == 0);
    assert(map_insert(m, 17, 17) == 0);
    assert(map_insert(m, 18, 18) == 0);
    assert(map_insert(m, 19, 19) == 0);
    assert(map_insert(m, 20, 20) == 0);
    assert(map_insert(m, 21, 21) == 0);
    assert(map_insert(m, 22, 22) == 0);
    assert(map_insert(m, 23, 23) == 0);
    assert(map_insert(m, 24, 24) == 0);
    assert(map_insert(m, 25, 25) == 0);
    assert(map_insert(m, 26, 26) == 0);
    assert(map_insert(m, 27, 27) == 0);
    assert(map_insert(m, 28, 28) == 0);
    assert(map_insert(m, 29, 29) == 0);
    assert(map_insert(m, 30, 30) == 0);
    assert(map_insert(m, 31, 31) == 0);
    assert(map_insert(m, 32, 32) == 0);
    assert(map_insert(m, 33, 33) == 0);
    assert(map_insert(m, 34, 34) == 0);
    assert(map_insert(m, 35, 35) == 0);
    assert(map_insert(m, 36, 36) == 0);
    assert(map_insert(m, 37, 37) == 0);
    assert(map_insert(m, 38, 38) == 0);
    assert(map_insert(m, 39, 39) == 0);
    assert(map_insert(m, 40, 40) == 0);
    assert(map_insert(m, 41, 41) == 0);
    assert(map_insert(m, 42, 42) == 0);
    assert(map_insert(m, 43, 43) == 0);
    assert(map_insert(m, 44, 44) == 0);
    assert(map_insert(m, 45, 45) == 0);
    assert(map_insert(m, 46, 46) == 0);
    assert(map_insert(m, 47, 47) == 0);
    assert(map_insert(m, 48, 48) == 0);
    assert(map_insert(m, 49, 49) == 0);

    uint64_t dest_key;
    uint32_t dest_val;

    assert(map_move_pair(m, 0, &dest_key, &dest_val) == 0);
    assert(map_get(m, 0) == NULL);
    assert(dest_key == 0);
    assert(dest_val == 0);

    assert(map_move_pair(m, 1, &dest_key, &dest_val) == 0);
    assert(map_get(m, 1) == NULL);
    assert(dest_key == 1);
    assert(dest_val == 1);

    assert(map_move_pair(m, 2, &dest_key, &dest_val) == 0);
    assert(map_get(m, 2) == NULL);
    assert(dest_key == 2);
    assert(dest_val == 2);

    assert(map_move_pair(m, 3, &dest_key, &dest_val) == 0);
    assert(map_get(m, 3) == NULL);
    assert(dest_key == 3);
    assert(dest_val == 3);

    assert(map_move_pair(m, 4, &dest_key, &dest_val) == 0);
    assert(map_get(m, 4) == NULL);
    assert(dest_key == 4);
    assert(dest_val == 4);

    assert(map_move_pair(m, 5, &dest_key, &dest_val) == 0);
    assert(map_get(m, 5) == NULL);
    assert(dest_key == 5);
    assert(dest_val == 5);

    assert(map_move_pair(m, 6, &dest_key, &dest_val) == 0);
    assert(map_get(m, 6) == NULL);
    assert(dest_key == 6);
    assert(dest_val == 6);

    assert(map_move_pair(m, 7, &dest_key, &dest_val) == 0);
    assert(map_get(m, 7) == NULL);
    assert(dest_key == 7);
    assert(dest_val == 7);

    assert(map_move_pair(m, 8, &dest_key, &dest_val) == 0);
    assert(map_get(m, 8) == NULL);
    assert(dest_key == 8);
    assert(dest_val == 8);

    assert(map_move_pair(m, 9, &dest_key, &dest_val) == 0);
    assert(map_get(m, 9) == NULL);
    assert(dest_key == 9);
    assert(dest_val == 9);

    assert(map_move_pair(m, 10, &dest_key, &dest_val) == 0);
    assert(map_get(m, 10) == NULL);
    assert(dest_key == 10);
    assert(dest_val == 10);

    assert(map_move_pair(m, 11, &dest_key, &dest_val) == 0);
    assert(map_get(m, 11) == NULL);
    assert(dest_key == 11);
    assert(dest_val == 11);

    assert(map_move_pair(m, 12, &dest_key, &dest_val) == 0);
    assert(map_get(m, 12) == NULL);
    assert(dest_key == 12);
    assert(dest_val == 12);

    assert(map_move_pair(m, 13, &dest_key, &dest_val) == 0);
    assert(map_get(m, 13) == NULL);
    assert(dest_key == 13);
    assert(dest_val == 13);

    assert(map_move_pair(m, 14, &dest_key, &dest_val) == 0);
    assert(map_get(m, 14) == NULL);
    assert(dest_key == 14);
    assert(dest_val == 14);

    assert(map_move_pair(m, 15, &dest_key, &dest_val) == 0);
    assert(map_get(m, 15) == NULL);
    assert(dest_key == 15);
    assert(dest_val == 15);

    assert(map_move_pair(m, 16, &dest_key, &dest_val) == 0);
    assert(map_get(m, 16) == NULL);
    assert(dest_key == 16);
    assert(dest_val == 16);

    assert(map_move_pair(m, 17, &dest_key, &dest_val) == 0);
    assert(map_get(m, 17) == NULL);
    assert(dest_key == 17);
    assert(dest_val == 17);

    assert(map_move_pair(m, 18, &dest_key, &dest_val) == 0);
    assert(map_get(m, 18) == NULL);
    assert(dest_key == 18);
    assert(dest_val == 18);

    assert(map_move_pair(m, 19, &dest_key, &dest_val) == 0);
    assert(map_get(m, 19) == NULL);
    assert(dest_key == 19);
    assert(dest_val == 19);

    assert(map_move_pair(m, 20, &dest_key, &dest_val) == 0);
    assert(map_get(m, 20) == NULL);
    assert(dest_key == 20);
    assert(dest_val == 20);

    assert(map_move_pair(m, 21, &dest_key, &dest_val) == 0);
    assert(map_get(m, 21) == NULL);
    assert(dest_key == 21);
    assert(dest_val == 21);

    assert(map_move_pair(m, 22, &dest_key, &dest_val) == 0);
    assert(map_get(m, 22) == NULL);
    assert(dest_key == 22);
    assert(dest_val == 22);

    assert(map_move_pair(m, 23, &dest_key, &dest_val) == 0);
    assert(map_get(m, 23) == NULL);
    assert(dest_key == 23);
    assert(dest_val == 23);

    assert(map_move_pair(m, 24, &dest_key, &dest_val) == 0);
    assert(map_get(m, 24) == NULL);
    assert(dest_key == 24);
    assert(dest_val == 24);

    assert(map_move_pair(m, 25, &dest_key, &dest_val) == 0);
    assert(map_get(m, 25) == NULL);
    assert(dest_key == 25);
    assert(dest_val == 25);

    assert(map_move_pair(m, 26, &dest_key, &dest_val) == 0);
    assert(map_get(m, 26) == NULL);
    assert(dest_key == 26);
    assert(dest_val == 26);

    assert(map_move_pair(m, 27, &dest_key, &dest_val) == 0);
    assert(map_get(m, 27) == NULL);
    assert(dest_key == 27);
    assert(dest_val == 27);

    assert(map_move_pair(m, 28, &dest_key, &dest_val) == 0);
    assert(map_get(m, 28) == NULL);
    assert(dest_key == 28);
    assert(dest_val == 28);

    assert(map_move_pair(m, 29, &dest_key, &dest_val) == 0);
    assert(map_get(m, 29) == NULL);
    assert(dest_key == 29);
    assert(dest_val == 29);

    assert(map_move_pair(m, 30, &dest_key, &dest_val) == 0);
    assert(map_get(m, 30) == NULL);
    assert(dest_key == 30);
    assert(dest_val == 30);

    assert(map_move_pair(m, 31, &dest_key, &dest_val) == 0);
    assert(map_get(m, 31) == NULL);
    assert(dest_key == 31);
    assert(dest_val == 31);

    assert(map_move_pair(m, 32, &dest_key, &dest_val) == 0);
    assert(map_get(m, 32) == NULL);
    assert(dest_key == 32);
    assert(dest_val == 32);

    assert(map_move_pair(m, 33, &dest_key, &dest_val) == 0);
    assert(map_get(m, 33) == NULL);
    assert(dest_key == 33);
    assert(dest_val == 33);

    assert(map_move_pair(m, 34, &dest_key, &dest_val) == 0);
    assert(map_get(m, 34) == NULL);
    assert(dest_key == 34);
    assert(dest_val == 34);

    assert(map_move_pair(m, 35, &dest_key, &dest_val) == 0);
    assert(map_get(m, 35) == NULL);
    assert(dest_key == 35);
    assert(dest_val == 35);

    assert(map_move_pair(m, 36, &dest_key, &dest_val) == 0);
    assert(map_get(m, 36) == NULL);
    assert(dest_key == 36);
    assert(dest_val == 36);

    assert(map_move_pair(m, 37, &dest_key, &dest_val) == 0);
    assert(map_get(m, 37) == NULL);
    assert(dest_key == 37);
    assert(dest_val == 37);

    assert(map_move_pair(m, 38, &dest_key, &dest_val) == 0);
    assert(map_get(m, 38) == NULL);
    assert(dest_key == 38);
    assert(dest_val == 38);

    assert(map_move_pair(m, 39, &dest_key, &dest_val) == 0);
    assert(map_get(m, 39) == NULL);
    assert(dest_key == 39);
    assert(dest_val == 39);

    assert(map_move_pair(m, 40, &dest_key, &dest_val) == 0);
    assert(map_get(m, 40) == NULL);
    assert(dest_key == 40);
    assert(dest_val == 40);

    assert(map_move_pair(m, 41, &dest_key, &dest_val) == 0);
    assert(map_get(m, 41) == NULL);
    assert(dest_key == 41);
    assert(dest_val == 41);

    assert(map_move_pair(m, 42, &dest_key, &dest_val) == 0);
    assert(map_get(m, 42) == NULL);
    assert(dest_key == 42);
    assert(dest_val == 42);

    assert(map_move_pair(m, 43, &dest_key, &dest_val) == 0);
    assert(map_get(m, 43) == NULL);
    assert(dest_key == 43);
    assert(dest_val == 43);

    assert(map_move_pair(m, 44, &dest_key, &dest_val) == 0);
    assert(map_get(m, 44) == NULL);
    assert(dest_key == 44);
    assert(dest_val == 44);

    assert(map_move_pair(m, 45, &dest_key, &dest_val) == 0);
    assert(map_get(m, 45) == NULL);
    assert(dest_key == 45);
    assert(dest_val == 45);

    assert(map_move_pair(m, 46, &dest_key, &dest_val) == 0);
    assert(map_get(m, 46) == NULL);
    assert(dest_key == 46);
    assert(dest_val == 46);

    assert(map_move_pair(m, 47, &dest_key, &dest_val) == 0);
    assert(map_get(m, 47) == NULL);
    assert(dest_key == 47);
    assert(dest_val == 47);

    assert(map_move_pair(m, 48, &dest_key, &dest_val) == 0);
    assert(map_get(m, 48) == NULL);
    assert(dest_key == 48);
    assert(dest_val == 48);

    assert(map_move_pair(m, 49, &dest_key, &dest_val) == 0);
    assert(map_get(m, 49) == NULL);
    assert(dest_key == 49);
    assert(dest_val == 49);

    assert(map_insert(m, 0, 0) == 0);
    assert(map_insert(m, 1, 1) == 0);
    assert(map_insert(m, 2, 2) == 0);
    assert(map_insert(m, 3, 3) == 0);
    assert(map_insert(m, 4, 4) == 0);
    assert(map_insert(m, 5, 5) == 0);
    assert(map_insert(m, 6, 6) == 0);
    assert(map_insert(m, 7, 7) == 0);
    assert(map_insert(m, 8, 8) == 0);
    assert(map_insert(m, 9, 9) == 0);
    assert(map_insert(m, 10, 10) == 0);
    assert(map_insert(m, 11, 11) == 0);
    assert(map_insert(m, 12, 12) == 0);
    assert(map_insert(m, 13, 13) == 0);
    assert(map_insert(m, 14, 14) == 0);
    assert(map_insert(m, 15, 15) == 0);
    assert(map_insert(m, 16, 16) == 0);
    assert(map_insert(m, 17, 17) == 0);
    assert(map_insert(m, 18, 18) == 0);
    assert(map_insert(m, 19, 19) == 0);
    assert(map_insert(m, 20, 20) == 0);
    assert(map_insert(m, 21, 21) == 0);
    assert(map_insert(m, 22, 22) == 0);
    assert(map_insert(m, 23, 23) == 0);
    assert(map_insert(m, 24, 24) == 0);
    assert(map_insert(m, 25, 25) == 0);
    assert(map_insert(m, 26, 26) == 0);
    assert(map_insert(m, 27, 27) == 0);
    assert(map_insert(m, 28, 28) == 0);
    assert(map_insert(m, 29, 29) == 0);
    assert(map_insert(m, 30, 30) == 0);
    assert(map_insert(m, 31, 31) == 0);
    assert(map_insert(m, 32, 32) == 0);
    assert(map_insert(m, 33, 33) == 0);
    assert(map_insert(m, 34, 34) == 0);
    assert(map_insert(m, 35, 35) == 0);
    assert(map_insert(m, 36, 36) == 0);
    assert(map_insert(m, 37, 37) == 0);
    assert(map_insert(m, 38, 38) == 0);
    assert(map_insert(m, 39, 39) == 0);
    assert(map_insert(m, 40, 40) == 0);
    assert(map_insert(m, 41, 41) == 0);
    assert(map_insert(m, 42, 42) == 0);
    assert(map_insert(m, 43, 43) == 0);
    assert(map_insert(m, 44, 44) == 0);
    assert(map_insert(m, 45, 45) == 0);
    assert(map_insert(m, 46, 46) == 0);
    assert(map_insert(m, 47, 47) == 0);
    assert(map_insert(m, 48, 48) == 0);
    assert(map_insert(m, 49, 49) == 0);

    assert(map_move_pair(m, 0, NULL, &dest_val) == 0);
    assert(map_get(m, 0) == 0);
    assert(dest_val == 0);

    assert(map_move_pair(m, 1, NULL, &dest_val) == 0);
    assert(map_get(m, 1) == 0);
    assert(dest_val == 1);

    assert(map_move_pair(m, 2, NULL, &dest_val) == 0);
    assert(map_get(m, 2) == 0);
    assert(dest_val == 2);

    assert(map_move_pair(m, 3, NULL, &dest_val) == 0);
    assert(map_get(m, 3) == 0);
    assert(dest_val == 3);

    assert(map_move_pair(m, 4, NULL, &dest_val) == 0);
    assert(map_get(m, 4) == 0);
    assert(dest_val == 4);

    assert(map_move_pair(m, 5, NULL, &dest_val) == 0);
    assert(map_get(m, 5) == 0);
    assert(dest_val == 5);

    assert(map_move_pair(m, 6, NULL, &dest_val) == 0);
    assert(map_get(m, 6) == 0);
    assert(dest_val == 6);

    assert(map_move_pair(m, 7, NULL, &dest_val) == 0);
    assert(map_get(m, 7) == 0);
    assert(dest_val == 7);

    assert(map_move_pair(m, 8, NULL, &dest_val) == 0);
    assert(map_get(m, 8) == 0);
    assert(dest_val == 8);

    assert(map_move_pair(m, 9, NULL, &dest_val) == 0);
    assert(map_get(m, 9) == 0);
    assert(dest_val == 9);

    assert(map_move_pair(m, 10, NULL, &dest_val) == 0);
    assert(map_get(m, 10) == 0);
    assert(dest_val == 10);

    assert(map_move_pair(m, 11, NULL, &dest_val) == 0);
    assert(map_get(m, 11) == 0);
    assert(dest_val == 11);

    assert(map_move_pair(m, 12, NULL, &dest_val) == 0);
    assert(map_get(m, 12) == 0);
    assert(dest_val == 12);

    assert(map_move_pair(m, 13, NULL, &dest_val) == 0);
    assert(map_get(m, 13) == 0);
    assert(dest_val == 13);

    assert(map_move_pair(m, 14, NULL, &dest_val) == 0);
    assert(map_get(m, 14) == 0);
    assert(dest_val == 14);

    assert(map_move_pair(m, 15, NULL, &dest_val) == 0);
    assert(map_get(m, 15) == 0);
    assert(dest_val == 15);

    assert(map_move_pair(m, 16, NULL, &dest_val) == 0);
    assert(map_get(m, 16) == 0);
    assert(dest_val == 16);

    assert(map_move_pair(m, 17, NULL, &dest_val) == 0);
    assert(map_get(m, 17) == 0);
    assert(dest_val == 17);

    assert(map_move_pair(m, 18, NULL, &dest_val) == 0);
    assert(map_get(m, 18) == 0);
    assert(dest_val == 18);

    assert(map_move_pair(m, 19, NULL, &dest_val) == 0);
    assert(map_get(m, 19) == 0);
    assert(dest_val == 19);

    assert(map_move_pair(m, 20, NULL, &dest_val) == 0);
    assert(map_get(m, 20) == 0);
    assert(dest_val == 20);

    assert(map_move_pair(m, 21, NULL, &dest_val) == 0);
    assert(map_get(m, 21) == 0);
    assert(dest_val == 21);

    assert(map_move_pair(m, 22, NULL, &dest_val) == 0);
    assert(map_get(m, 22) == 0);
    assert(dest_val == 22);

    assert(map_move_pair(m, 23, NULL, &dest_val) == 0);
    assert(map_get(m, 23) == 0);
    assert(dest_val == 23);

    assert(map_move_pair(m, 24, NULL, &dest_val) == 0);
    assert(map_get(m, 24) == 0);
    assert(dest_val == 24);

    assert(map_move_pair(m, 25, NULL, &dest_val) == 0);
    assert(map_get(m, 25) == 0);
    assert(dest_val == 25);

    assert(map_move_pair(m, 26, NULL, &dest_val) == 0);
    assert(map_get(m, 26) == 0);
    assert(dest_val == 26);

    assert(map_move_pair(m, 27, NULL, &dest_val) == 0);
    assert(map_get(m, 27) == 0);
    assert(dest_val == 27);

    assert(map_move_pair(m, 28, NULL, &dest_val) == 0);
    assert(map_get(m, 28) == 0);
    assert(dest_val == 28);

    assert(map_move_pair(m, 29, NULL, &dest_val) == 0);
    assert(map_get(m, 29) == 0);
    assert(dest_val == 29);

    assert(map_move_pair(m, 30, NULL, &dest_val) == 0);
    assert(map_get(m, 30) == 0);
    assert(dest_val == 30);

    assert(map_move_pair(m, 31, NULL, &dest_val) == 0);
    assert(map_get(m, 31) == 0);
    assert(dest_val == 31);

    assert(map_move_pair(m, 32, NULL, &dest_val) == 0);
    assert(map_get(m, 32) == 0);
    assert(dest_val == 32);

    assert(map_move_pair(m, 33, NULL, &dest_val) == 0);
    assert(map_get(m, 33) == 0);
    assert(dest_val == 33);

    assert(map_move_pair(m, 34, NULL, &dest_val) == 0);
    assert(map_get(m, 34) == 0);
    assert(dest_val == 34);

    assert(map_move_pair(m, 35, NULL, &dest_val) == 0);
    assert(map_get(m, 35) == 0);
    assert(dest_val == 35);

    assert(map_move_pair(m, 36, NULL, &dest_val) == 0);
    assert(map_get(m, 36) == 0);
    assert(dest_val == 36);

    assert(map_move_pair(m, 37, NULL, &dest_val) == 0);
    assert(map_get(m, 37) == 0);
    assert(dest_val == 37);

    assert(map_move_pair(m, 38, NULL, &dest_val) == 0);
    assert(map_get(m, 38) == 0);
    assert(dest_val == 38);

    assert(map_move_pair(m, 39, NULL, &dest_val) == 0);
    assert(map_get(m, 39) == 0);
    assert(dest_val == 39);

    assert(map_move_pair(m, 40, NULL, &dest_val) == 0);
    assert(map_get(m, 40) == 0);
    assert(dest_val == 40);

    assert(map_move_pair(m, 41, NULL, &dest_val) == 0);
    assert(map_get(m, 41) == 0);
    assert(dest_val == 41);

    assert(map_move_pair(m, 42, NULL, &dest_val) == 0);
    assert(map_get(m, 42) == 0);
    assert(dest_val == 42);

    assert(map_move_pair(m, 43, NULL, &dest_val) == 0);
    assert(map_get(m, 43) == 0);
    assert(dest_val == 43);

    assert(map_move_pair(m, 44, NULL, &dest_val) == 0);
    assert(map_get(m, 44) == 0);
    assert(dest_val == 44);

    assert(map_move_pair(m, 45, NULL, &dest_val) == 0);
    assert(map_get(m, 45) == 0);
    assert(dest_val == 45);

    assert(map_move_pair(m, 46, NULL, &dest_val) == 0);
    assert(map_get(m, 46) == 0);
    assert(dest_val == 46);

    assert(map_move_pair(m, 47, NULL, &dest_val) == 0);
    assert(map_get(m, 47) == 0);
    assert(dest_val == 47);

    assert(map_move_pair(m, 48, NULL, &dest_val) == 0);
    assert(map_get(m, 48) == 0);
    assert(dest_val == 48);

    assert(map_move_pair(m, 49, NULL, &dest_val) == 0);
    assert(map_get(m, 49) == 0);
    assert(dest_val == 49);

    assert(map_insert(m, 0, 0) == 0);
    assert(map_insert(m, 1, 1) == 0);
    assert(map_insert(m, 2, 2) == 0);
    assert(map_insert(m, 3, 3) == 0);
    assert(map_insert(m, 4, 4) == 0);
    assert(map_insert(m, 5, 5) == 0);
    assert(map_insert(m, 6, 6) == 0);
    assert(map_insert(m, 7, 7) == 0);
    assert(map_insert(m, 8, 8) == 0);
    assert(map_insert(m, 9, 9) == 0);
    assert(map_insert(m, 10, 10) == 0);
    assert(map_insert(m, 11, 11) == 0);
    assert(map_insert(m, 12, 12) == 0);
    assert(map_insert(m, 13, 13) == 0);
    assert(map_insert(m, 14, 14) == 0);
    assert(map_insert(m, 15, 15) == 0);
    assert(map_insert(m, 16, 16) == 0);
    assert(map_insert(m, 17, 17) == 0);
    assert(map_insert(m, 18, 18) == 0);
    assert(map_insert(m, 19, 19) == 0);
    assert(map_insert(m, 20, 20) == 0);
    assert(map_insert(m, 21, 21) == 0);
    assert(map_insert(m, 22, 22) == 0);
    assert(map_insert(m, 23, 23) == 0);
    assert(map_insert(m, 24, 24) == 0);
    assert(map_insert(m, 25, 25) == 0);
    assert(map_insert(m, 26, 26) == 0);
    assert(map_insert(m, 27, 27) == 0);
    assert(map_insert(m, 28, 28) == 0);
    assert(map_insert(m, 29, 29) == 0);
    assert(map_insert(m, 30, 30) == 0);
    assert(map_insert(m, 31, 31) == 0);
    assert(map_insert(m, 32, 32) == 0);
    assert(map_insert(m, 33, 33) == 0);
    assert(map_insert(m, 34, 34) == 0);
    assert(map_insert(m, 35, 35) == 0);
    assert(map_insert(m, 36, 36) == 0);
    assert(map_insert(m, 37, 37) == 0);
    assert(map_insert(m, 38, 38) == 0);
    assert(map_insert(m, 39, 39) == 0);
    assert(map_insert(m, 40, 40) == 0);
    assert(map_insert(m, 41, 41) == 0);
    assert(map_insert(m, 42, 42) == 0);
    assert(map_insert(m, 43, 43) == 0);
    assert(map_insert(m, 44, 44) == 0);
    assert(map_insert(m, 45, 45) == 0);
    assert(map_insert(m, 46, 46) == 0);
    assert(map_insert(m, 47, 47) == 0);
    assert(map_insert(m, 48, 48) == 0);
    assert(map_insert(m, 49, 49) == 0);

    assert(map_move_pair(m, 0, &dest_key, NULL) == 0);
    assert(map_get(m, 0) == 0);
    assert(dest_key == 0);

    assert(map_move_pair(m, 1, &dest_key, NULL) == 0);
    assert(map_get(m, 1) == 0);
    assert(dest_key == 1);

    assert(map_move_pair(m, 2, &dest_key, NULL) == 0);
    assert(map_get(m, 2) == 0);
    assert(dest_key == 2);

    assert(map_move_pair(m, 3, &dest_key, NULL) == 0);
    assert(map_get(m, 3) == 0);
    assert(dest_key == 3);

    assert(map_move_pair(m, 4, &dest_key, NULL) == 0);
    assert(map_get(m, 4) == 0);
    assert(dest_key == 4);

    assert(map_move_pair(m, 5, &dest_key, NULL) == 0);
    assert(map_get(m, 5) == 0);
    assert(dest_key == 5);

    assert(map_move_pair(m, 6, &dest_key, NULL) == 0);
    assert(map_get(m, 6) == 0);
    assert(dest_key == 6);

    assert(map_move_pair(m, 7, &dest_key, NULL) == 0);
    assert(map_get(m, 7) == 0);
    assert(dest_key == 7);

    assert(map_move_pair(m, 8, &dest_key, NULL) == 0);
    assert(map_get(m, 8) == 0);
    assert(dest_key == 8);

    assert(map_move_pair(m, 9, &dest_key, NULL) == 0);
    assert(map_get(m, 9) == 0);
    assert(dest_key == 9);

    assert(map_move_pair(m, 10, &dest_key, NULL) == 0);
    assert(map_get(m, 10) == 0);
    assert(dest_key == 10);

    assert(map_move_pair(m, 11, &dest_key, NULL) == 0);
    assert(map_get(m, 11) == 0);
    assert(dest_key == 11);

    assert(map_move_pair(m, 12, &dest_key, NULL) == 0);
    assert(map_get(m, 12) == 0);
    assert(dest_key == 12);

    assert(map_move_pair(m, 13, &dest_key, NULL) == 0);
    assert(map_get(m, 13) == 0);
    assert(dest_key == 13);

    assert(map_move_pair(m, 14, &dest_key, NULL) == 0);
    assert(map_get(m, 14) == 0);
    assert(dest_key == 14);

    assert(map_move_pair(m, 15, &dest_key, NULL) == 0);
    assert(map_get(m, 15) == 0);
    assert(dest_key == 15);

    assert(map_move_pair(m, 16, &dest_key, NULL) == 0);
    assert(map_get(m, 16) == 0);
    assert(dest_key == 16);

    assert(map_move_pair(m, 17, &dest_key, NULL) == 0);
    assert(map_get(m, 17) == 0);
    assert(dest_key == 17);

    assert(map_move_pair(m, 18, &dest_key, NULL) == 0);
    assert(map_get(m, 18) == 0);
    assert(dest_key == 18);

    assert(map_move_pair(m, 19, &dest_key, NULL) == 0);
    assert(map_get(m, 19) == 0);
    assert(dest_key == 19);

    assert(map_move_pair(m, 20, &dest_key, NULL) == 0);
    assert(map_get(m, 20) == 0);
    assert(dest_key == 20);

    assert(map_move_pair(m, 21, &dest_key, NULL) == 0);
    assert(map_get(m, 21) == 0);
    assert(dest_key == 21);

    assert(map_move_pair(m, 22, &dest_key, NULL) == 0);
    assert(map_get(m, 22) == 0);
    assert(dest_key == 22);

    assert(map_move_pair(m, 23, &dest_key, NULL) == 0);
    assert(map_get(m, 23) == 0);
    assert(dest_key == 23);

    assert(map_move_pair(m, 24, &dest_key, NULL) == 0);
    assert(map_get(m, 24) == 0);
    assert(dest_key == 24);

    assert(map_move_pair(m, 25, &dest_key, NULL) == 0);
    assert(map_get(m, 25) == 0);
    assert(dest_key == 25);

    assert(map_move_pair(m, 26, &dest_key, NULL) == 0);
    assert(map_get(m, 26) == 0);
    assert(dest_key == 26);

    assert(map_move_pair(m, 27, &dest_key, NULL) == 0);
    assert(map_get(m, 27) == 0);
    assert(dest_key == 27);

    assert(map_move_pair(m, 28, &dest_key, NULL) == 0);
    assert(map_get(m, 28) == 0);
    assert(dest_key == 28);

    assert(map_move_pair(m, 29, &dest_key, NULL) == 0);
    assert(map_get(m, 29) == 0);
    assert(dest_key == 29);

    assert(map_move_pair(m, 30, &dest_key, NULL) == 0);
    assert(map_get(m, 30) == 0);
    assert(dest_key == 30);

    assert(map_move_pair(m, 31, &dest_key, NULL) == 0);
    assert(map_get(m, 31) == 0);
    assert(dest_key == 31);

    assert(map_move_pair(m, 32, &dest_key, NULL) == 0);
    assert(map_get(m, 32) == 0);
    assert(dest_key == 32);

    assert(map_move_pair(m, 33, &dest_key, NULL) == 0);
    assert(map_get(m, 33) == 0);
    assert(dest_key == 33);

    assert(map_move_pair(m, 34, &dest_key, NULL) == 0);
    assert(map_get(m, 34) == 0);
    assert(dest_key == 34);

    assert(map_move_pair(m, 35, &dest_key, NULL) == 0);
    assert(map_get(m, 35) == 0);
    assert(dest_key == 35);

    assert(map_move_pair(m, 36, &dest_key, NULL) == 0);
    assert(map_get(m, 36) == 0);
    assert(dest_key == 36);

    assert(map_move_pair(m, 37, &dest_key, NULL) == 0);
    assert(map_get(m, 37) == 0);
    assert(dest_key == 37);

    assert(map_move_pair(m, 38, &dest_key, NULL) == 0);
    assert(map_get(m, 38) == 0);
    assert(dest_key == 38);

    assert(map_move_pair(m, 39, &dest_key, NULL) == 0);
    assert(map_get(m, 39) == 0);
    assert(dest_key == 39);

    assert(map_move_pair(m, 40, &dest_key, NULL) == 0);
    assert(map_get(m, 40) == 0);
    assert(dest_key == 40);

    assert(map_move_pair(m, 41, &dest_key, NULL) == 0);
    assert(map_get(m, 41) == 0);
    assert(dest_key == 41);

    assert(map_move_pair(m, 42, &dest_key, NULL) == 0);
    assert(map_get(m, 42) == 0);
    assert(dest_key == 42);

    assert(map_move_pair(m, 43, &dest_key, NULL) == 0);
    assert(map_get(m, 43) == 0);
    assert(dest_key == 43);

    assert(map_move_pair(m, 44, &dest_key, NULL) == 0);
    assert(map_get(m, 44) == 0);
    assert(dest_key == 44);

    assert(map_move_pair(m, 45, &dest_key, NULL) == 0);
    assert(map_get(m, 45) == 0);
    assert(dest_key == 45);

    assert(map_move_pair(m, 46, &dest_key, NULL) == 0);
    assert(map_get(m, 46) == 0);
    assert(dest_key == 46);

    assert(map_move_pair(m, 47, &dest_key, NULL) == 0);
    assert(map_get(m, 47) == 0);
    assert(dest_key == 47);

    assert(map_move_pair(m, 48, &dest_key, NULL) == 0);
    assert(map_get(m, 48) == 0);
    assert(dest_key == 48);

    assert(map_move_pair(m, 49, &dest_key, NULL) == 0);
    assert(map_get(m, 49) == 0);
    assert(dest_key == 49);

    assert(map_insert(m, 0, 0) == 0);
    assert(map_insert(m, 1, 1) == 0);
    assert(map_insert(m, 2, 2) == 0);
    assert(map_insert(m, 3, 3) == 0);
    assert(map_insert(m, 4, 4) == 0);
    assert(map_insert(m, 5, 5) == 0);
    assert(map_insert(m, 6, 6) == 0);
    assert(map_insert(m, 7, 7) == 0);
    assert(map_insert(m, 8, 8) == 0);
    assert(map_insert(m, 9, 9) == 0);
    assert(map_insert(m, 10, 10) == 0);
    assert(map_insert(m, 11, 11) == 0);
    assert(map_insert(m, 12, 12) == 0);
    assert(map_insert(m, 13, 13) == 0);
    assert(map_insert(m, 14, 14) == 0);
    assert(map_insert(m, 15, 15) == 0);
    assert(map_insert(m, 16, 16) == 0);
    assert(map_insert(m, 17, 17) == 0);
    assert(map_insert(m, 18, 18) == 0);
    assert(map_insert(m, 19, 19) == 0);
    assert(map_insert(m, 20, 20) == 0);
    assert(map_insert(m, 21, 21) == 0);
    assert(map_insert(m, 22, 22) == 0);
    assert(map_insert(m, 23, 23) == 0);
    assert(map_insert(m, 24, 24) == 0);
    assert(map_insert(m, 25, 25) == 0);
    assert(map_insert(m, 26, 26) == 0);
    assert(map_insert(m, 27, 27) == 0);
    assert(map_insert(m, 28, 28) == 0);
    assert(map_insert(m, 29, 29) == 0);
    assert(map_insert(m, 30, 30) == 0);
    assert(map_insert(m, 31, 31) == 0);
    assert(map_insert(m, 32, 32) == 0);
    assert(map_insert(m, 33, 33) == 0);
    assert(map_insert(m, 34, 34) == 0);
    assert(map_insert(m, 35, 35) == 0);
    assert(map_insert(m, 36, 36) == 0);
    assert(map_insert(m, 37, 37) == 0);
    assert(map_insert(m, 38, 38) == 0);
    assert(map_insert(m, 39, 39) == 0);
    assert(map_insert(m, 40, 40) == 0);
    assert(map_insert(m, 41, 41) == 0);
    assert(map_insert(m, 42, 42) == 0);
    assert(map_insert(m, 43, 43) == 0);
    assert(map_insert(m, 44, 44) == 0);
    assert(map_insert(m, 45, 45) == 0);
    assert(map_insert(m, 46, 46) == 0);
    assert(map_insert(m, 47, 47) == 0);
    assert(map_insert(m, 48, 48) == 0);
    assert(map_insert(m, 49, 49) == 0);

    assert(map_move_pair(m, 0, NULL, NULL) == 0);
    assert(map_get(m, 0) == NULL);

    assert(map_move_pair(m, 1, NULL, NULL) == 0);
    assert(map_get(m, 1) == NULL);

    assert(map_move_pair(m, 2, NULL, NULL) == 0);
    assert(map_get(m, 2) == NULL);

    assert(map_move_pair(m, 3, NULL, NULL) == 0);
    assert(map_get(m, 3) == NULL);

    assert(map_move_pair(m, 4, NULL, NULL) == 0);
    assert(map_get(m, 4) == NULL);

    assert(map_move_pair(m, 5, NULL, NULL) == 0);
    assert(map_get(m, 5) == NULL);

    assert(map_move_pair(m, 6, NULL, NULL) == 0);
    assert(map_get(m, 6) == NULL);

    assert(map_move_pair(m, 7, NULL, NULL) == 0);
    assert(map_get(m, 7) == NULL);

    assert(map_move_pair(m, 8, NULL, NULL) == 0);
    assert(map_get(m, 8) == NULL);

    assert(map_move_pair(m, 9, NULL, NULL) == 0);
    assert(map_get(m, 9) == NULL);

    assert(map_move_pair(m, 10, NULL, NULL) == 0);
    assert(map_get(m, 10) == NULL);

    assert(map_move_pair(m, 11, NULL, NULL) == 0);
    assert(map_get(m, 11) == NULL);

    assert(map_move_pair(m, 12, NULL, NULL) == 0);
    assert(map_get(m, 12) == NULL);

    assert(map_move_pair(m, 13, NULL, NULL) == 0);
    assert(map_get(m, 13) == NULL);

    assert(map_move_pair(m, 14, NULL, NULL) == 0);
    assert(map_get(m, 14) == NULL);

    assert(map_move_pair(m, 15, NULL, NULL) == 0);
    assert(map_get(m, 15) == NULL);

    assert(map_move_pair(m, 16, NULL, NULL) == 0);
    assert(map_get(m, 16) == NULL);

    assert(map_move_pair(m, 17, NULL, NULL) == 0);
    assert(map_get(m, 17) == NULL);

    assert(map_move_pair(m, 18, NULL, NULL) == 0);
    assert(map_get(m, 18) == NULL);

    assert(map_move_pair(m, 19, NULL, NULL) == 0);
    assert(map_get(m, 19) == NULL);

    assert(map_move_pair(m, 20, NULL, NULL) == 0);
    assert(map_get(m, 20) == NULL);

    assert(map_move_pair(m, 21, NULL, NULL) == 0);
    assert(map_get(m, 21) == NULL);

    assert(map_move_pair(m, 22, NULL, NULL) == 0);
    assert(map_get(m, 22) == NULL);

    assert(map_move_pair(m, 23, NULL, NULL) == 0);
    assert(map_get(m, 23) == NULL);

    assert(map_move_pair(m, 24, NULL, NULL) == 0);
    assert(map_get(m, 24) == NULL);

    assert(map_move_pair(m, 25, NULL, NULL) == 0);
    assert(map_get(m, 25) == NULL);

    assert(map_move_pair(m, 26, NULL, NULL) == 0);
    assert(map_get(m, 26) == NULL);

    assert(map_move_pair(m, 27, NULL, NULL) == 0);
    assert(map_get(m, 27) == NULL);

    assert(map_move_pair(m, 28, NULL, NULL) == 0);
    assert(map_get(m, 28) == NULL);

    assert(map_move_pair(m, 29, NULL, NULL) == 0);
    assert(map_get(m, 29) == NULL);

    assert(map_move_pair(m, 30, NULL, NULL) == 0);
    assert(map_get(m, 30) == NULL);

    assert(map_move_pair(m, 31, NULL, NULL) == 0);
    assert(map_get(m, 31) == NULL);

    assert(map_move_pair(m, 32, NULL, NULL) == 0);
    assert(map_get(m, 32) == NULL);

    assert(map_move_pair(m, 33, NULL, NULL) == 0);
    assert(map_get(m, 33) == NULL);

    assert(map_move_pair(m, 34, NULL, NULL) == 0);
    assert(map_get(m, 34) == NULL);

    assert(map_move_pair(m, 35, NULL, NULL) == 0);
    assert(map_get(m, 35) == NULL);

    assert(map_move_pair(m, 36, NULL, NULL) == 0);
    assert(map_get(m, 36) == NULL);

    assert(map_move_pair(m, 37, NULL, NULL) == 0);
    assert(map_get(m, 37) == NULL);

    assert(map_move_pair(m, 38, NULL, NULL) == 0);
    assert(map_get(m, 38) == NULL);

    assert(map_move_pair(m, 39, NULL, NULL) == 0);
    assert(map_get(m, 39) == NULL);

    assert(map_move_pair(m, 40, NULL, NULL) == 0);
    assert(map_get(m, 40) == NULL);

    assert(map_move_pair(m, 41, NULL, NULL) == 0);
    assert(map_get(m, 41) == NULL);

    assert(map_move_pair(m, 42, NULL, NULL) == 0);
    assert(map_get(m, 42) == NULL);

    assert(map_move_pair(m, 43, NULL, NULL) == 0);
    assert(map_get(m, 43) == NULL);

    assert(map_move_pair(m, 44, NULL, NULL) == 0);
    assert(map_get(m, 44) == NULL);

    assert(map_move_pair(m, 45, NULL, NULL) == 0);
    assert(map_get(m, 45) == NULL);

    assert(map_move_pair(m, 46, NULL, NULL) == 0);
    assert(map_get(m, 46) == NULL);

    assert(map_move_pair(m, 47, NULL, NULL) == 0);
    assert(map_get(m, 47) == NULL);

    assert(map_move_pair(m, 48, NULL, NULL) == 0);
    assert(map_get(m, 48) == NULL);

    assert(map_move_pair(m, 49, NULL, NULL) == 0);
    assert(map_get(m, 49) == NULL);

    assert(map_size(m) == 0);

    map_free(m);
    TEST_END();
}

void mremove(void)
{
    TEST_START();
    map_t* m = map_create();

    assert(map_insert(m, 0, 0) == 0);
    assert(map_insert(m, 1, 1) == 0);
    assert(map_insert(m, 2, 2) == 0);
    assert(map_insert(m, 3, 3) == 0);
    assert(map_insert(m, 4, 4) == 0);
    assert(map_insert(m, 5, 5) == 0);
    assert(map_insert(m, 6, 6) == 0);
    assert(map_insert(m, 7, 7) == 0);
    assert(map_insert(m, 8, 8) == 0);
    assert(map_insert(m, 9, 9) == 0);
    assert(map_insert(m, 10, 10) == 0);
    assert(map_insert(m, 11, 11) == 0);
    assert(map_insert(m, 12, 12) == 0);
    assert(map_insert(m, 13, 13) == 0);
    assert(map_insert(m, 14, 14) == 0);
    assert(map_insert(m, 15, 15) == 0);
    assert(map_insert(m, 16, 16) == 0);
    assert(map_insert(m, 17, 17) == 0);
    assert(map_insert(m, 18, 18) == 0);
    assert(map_insert(m, 19, 19) == 0);
    assert(map_insert(m, 20, 20) == 0);
    assert(map_insert(m, 21, 21) == 0);
    assert(map_insert(m, 22, 22) == 0);
    assert(map_insert(m, 23, 23) == 0);
    assert(map_insert(m, 24, 24) == 0);
    assert(map_insert(m, 25, 25) == 0);
    assert(map_insert(m, 26, 26) == 0);
    assert(map_insert(m, 27, 27) == 0);
    assert(map_insert(m, 28, 28) == 0);
    assert(map_insert(m, 29, 29) == 0);
    assert(map_insert(m, 30, 30) == 0);
    assert(map_insert(m, 31, 31) == 0);
    assert(map_insert(m, 32, 32) == 0);
    assert(map_insert(m, 33, 33) == 0);
    assert(map_insert(m, 34, 34) == 0);
    assert(map_insert(m, 35, 35) == 0);
    assert(map_insert(m, 36, 36) == 0);
    assert(map_insert(m, 37, 37) == 0);
    assert(map_insert(m, 38, 38) == 0);
    assert(map_insert(m, 39, 39) == 0);
    assert(map_insert(m, 40, 40) == 0);
    assert(map_insert(m, 41, 41) == 0);
    assert(map_insert(m, 42, 42) == 0);
    assert(map_insert(m, 43, 43) == 0);
    assert(map_insert(m, 44, 44) == 0);
    assert(map_insert(m, 45, 45) == 0);
    assert(map_insert(m, 46, 46) == 0);
    assert(map_insert(m, 47, 47) == 0);
    assert(map_insert(m, 48, 48) == 0);
    assert(map_insert(m, 49, 49) == 0);

    assert(map_size(m) == 50);

    assert(map_remove(m, 0) == 0);
    assert(map_remove(m, 1) == 0);
    assert(map_remove(m, 2) == 0);
    assert(map_remove(m, 3) == 0);
    assert(map_remove(m, 4) == 0);
    assert(map_remove(m, 5) == 0);
    assert(map_remove(m, 6) == 0);
    assert(map_remove(m, 7) == 0);
    assert(map_remove(m, 8) == 0);
    assert(map_remove(m, 9) == 0);
    assert(map_remove(m, 10) == 0);
    assert(map_remove(m, 11) == 0);
    assert(map_remove(m, 12) == 0);
    assert(map_remove(m, 13) == 0);
    assert(map_remove(m, 14) == 0);
    assert(map_remove(m, 15) == 0);
    assert(map_remove(m, 16) == 0);
    assert(map_remove(m, 17) == 0);
    assert(map_remove(m, 18) == 0);
    assert(map_remove(m, 19) == 0);
    assert(map_remove(m, 20) == 0);
    assert(map_remove(m, 21) == 0);
    assert(map_remove(m, 22) == 0);
    assert(map_remove(m, 23) == 0);
    assert(map_remove(m, 24) == 0);
    assert(map_remove(m, 25) == 0);
    assert(map_remove(m, 26) == 0);
    assert(map_remove(m, 27) == 0);
    assert(map_remove(m, 28) == 0);
    assert(map_remove(m, 29) == 0);
    assert(map_remove(m, 30) == 0);
    assert(map_remove(m, 31) == 0);
    assert(map_remove(m, 32) == 0);
    assert(map_remove(m, 33) == 0);
    assert(map_remove(m, 34) == 0);
    assert(map_remove(m, 35) == 0);
    assert(map_remove(m, 36) == 0);
    assert(map_remove(m, 37) == 0);
    assert(map_remove(m, 38) == 0);
    assert(map_remove(m, 39) == 0);
    assert(map_remove(m, 40) == 0);
    assert(map_remove(m, 41) == 0);
    assert(map_remove(m, 42) == 0);
    assert(map_remove(m, 43) == 0);
    assert(map_remove(m, 44) == 0);
    assert(map_remove(m, 45) == 0);
    assert(map_remove(m, 46) == 0);
    assert(map_remove(m, 47) == 0);
    assert(map_remove(m, 48) == 0);
    assert(map_remove(m, 49) == 0);

    assert(map_size(m) == 0);
    assert(map_capacity(m) == INITIAL_CAPACITY * MAX_LOAD_FACTOR);

    assert(map_insert(m, 0, 0) == 0);
    assert(map_insert(m, 1, 1) == 0);
    assert(map_insert(m, 2, 2) == 0);
    assert(map_insert(m, 3, 3) == 0);
    assert(map_insert(m, 4, 4) == 0);
    assert(map_insert(m, 5, 5) == 0);
    assert(map_insert(m, 6, 6) == 0);
    assert(map_insert(m, 7, 7) == 0);
    assert(map_insert(m, 8, 8) == 0);
    assert(map_insert(m, 9, 9) == 0);
    assert(map_insert(m, 10, 10) == 0);
    assert(map_insert(m, 11, 11) == 0);
    assert(map_insert(m, 12, 12) == 0);
    assert(map_insert(m, 13, 13) == 0);
    assert(map_insert(m, 14, 14) == 0);
    assert(map_insert(m, 15, 15) == 0);
    assert(map_insert(m, 16, 16) == 0);
    assert(map_insert(m, 17, 17) == 0);
    assert(map_insert(m, 18, 18) == 0);
    assert(map_insert(m, 19, 19) == 0);
    assert(map_insert(m, 20, 20) == 0);
    assert(map_insert(m, 21, 21) == 0);
    assert(map_insert(m, 22, 22) == 0);
    assert(map_insert(m, 23, 23) == 0);
    assert(map_insert(m, 24, 24) == 0);
    assert(map_insert(m, 25, 25) == 0);
    assert(map_insert(m, 26, 26) == 0);
    assert(map_insert(m, 27, 27) == 0);
    assert(map_insert(m, 28, 28) == 0);
    assert(map_insert(m, 29, 29) == 0);
    assert(map_insert(m, 30, 30) == 0);
    assert(map_insert(m, 31, 31) == 0);
    assert(map_insert(m, 32, 32) == 0);
    assert(map_insert(m, 33, 33) == 0);
    assert(map_insert(m, 34, 34) == 0);
    assert(map_insert(m, 35, 35) == 0);
    assert(map_insert(m, 36, 36) == 0);
    assert(map_insert(m, 37, 37) == 0);
    assert(map_insert(m, 38, 38) == 0);
    assert(map_insert(m, 39, 39) == 0);
    assert(map_insert(m, 40, 40) == 0);
    assert(map_insert(m, 41, 41) == 0);
    assert(map_insert(m, 42, 42) == 0);
    assert(map_insert(m, 43, 43) == 0);
    assert(map_insert(m, 44, 44) == 0);
    assert(map_insert(m, 45, 45) == 0);
    assert(map_insert(m, 46, 46) == 0);
    assert(map_insert(m, 47, 47) == 0);
    assert(map_insert(m, 48, 48) == 0);
    assert(map_insert(m, 49, 49) == 0);

    assert(map_remove(m, 0) == 0);
    assert(map_remove(m, 1) == 0);
    assert(map_remove(m, 2) == 0);
    assert(map_remove(m, 3) == 0);
    assert(map_remove(m, 4) == 0);
    assert(map_remove(m, 5) == 0);
    assert(map_remove(m, 6) == 0);
    assert(map_remove(m, 7) == 0);
    assert(map_remove(m, 8) == 0);
    assert(map_remove(m, 9) == 0);
    assert(map_remove(m, 10) == 0);
    assert(map_remove(m, 11) == 0);
    assert(map_remove(m, 12) == 0);
    assert(map_remove(m, 13) == 0);
    assert(map_remove(m, 14) == 0);
    assert(map_remove(m, 15) == 0);
    assert(map_remove(m, 16) == 0);
    assert(map_remove(m, 17) == 0);
    assert(map_remove(m, 18) == 0);
    assert(map_remove(m, 19) == 0);
    assert(map_remove(m, 20) == 0);
    assert(map_remove(m, 21) == 0);
    assert(map_remove(m, 22) == 0);
    assert(map_remove(m, 23) == 0);
    assert(map_remove(m, 24) == 0);
    assert(map_remove(m, 25) == 0);
    assert(map_remove(m, 26) == 0);
    assert(map_remove(m, 27) == 0);
    assert(map_remove(m, 28) == 0);
    assert(map_remove(m, 29) == 0);
    assert(map_remove(m, 30) == 0);
    assert(map_remove(m, 31) == 0);
    assert(map_remove(m, 32) == 0);
    assert(map_remove(m, 33) == 0);
    assert(map_remove(m, 34) == 0);
    assert(map_remove(m, 35) == 0);
    assert(map_remove(m, 36) == 0);
    assert(map_remove(m, 37) == 0);
    assert(map_remove(m, 38) == 0);
    assert(map_remove(m, 39) == 0);
    assert(map_remove(m, 40) == 0);
    assert(map_remove(m, 41) == 0);
    assert(map_remove(m, 42) == 0);
    assert(map_remove(m, 43) == 0);
    assert(map_remove(m, 44) == 0);
    assert(map_remove(m, 45) == 0);
    assert(map_remove(m, 46) == 0);
    assert(map_remove(m, 47) == 0);
    assert(map_remove(m, 48) == 0);
    assert(map_remove(m, 49) == 0);

    assert(map_size(m) == 0);

    assert(map_remove(m, 0) > 0);
    assert(map_remove(m, 1) > 0);
    assert(map_remove(m, 2) > 0);
    assert(map_remove(m, 3) > 0);
    assert(map_remove(m, 4) > 0);
    assert(map_remove(m, 5) > 0);
    assert(map_remove(m, 6) > 0);
    assert(map_remove(m, 7) > 0);
    assert(map_remove(m, 8) > 0);
    assert(map_remove(m, 9) > 0);
    assert(map_remove(m, 10) > 0);
    assert(map_remove(m, 11) > 0);
    assert(map_remove(m, 12) > 0);
    assert(map_remove(m, 13) > 0);
    assert(map_remove(m, 14) > 0);
    assert(map_remove(m, 15) > 0);
    assert(map_remove(m, 16) > 0);
    assert(map_remove(m, 17) > 0);
    assert(map_remove(m, 18) > 0);
    assert(map_remove(m, 19) > 0);
    assert(map_remove(m, 20) > 0);
    assert(map_remove(m, 21) > 0);
    assert(map_remove(m, 22) > 0);
    assert(map_remove(m, 23) > 0);
    assert(map_remove(m, 24) > 0);
    assert(map_remove(m, 25) > 0);
    assert(map_remove(m, 26) > 0);
    assert(map_remove(m, 27) > 0);
    assert(map_remove(m, 28) > 0);
    assert(map_remove(m, 29) > 0);
    assert(map_remove(m, 30) > 0);
    assert(map_remove(m, 31) > 0);
    assert(map_remove(m, 32) > 0);
    assert(map_remove(m, 33) > 0);
    assert(map_remove(m, 34) > 0);
    assert(map_remove(m, 35) > 0);
    assert(map_remove(m, 36) > 0);
    assert(map_remove(m, 37) > 0);
    assert(map_remove(m, 38) > 0);
    assert(map_remove(m, 39) > 0);
    assert(map_remove(m, 40) > 0);
    assert(map_remove(m, 41) > 0);
    assert(map_remove(m, 42) > 0);
    assert(map_remove(m, 43) > 0);
    assert(map_remove(m, 44) > 0);
    assert(map_remove(m, 45) > 0);
    assert(map_remove(m, 46) > 0);
    assert(map_remove(m, 47) > 0);
    assert(map_remove(m, 48) > 0);
    assert(map_remove(m, 49) > 0);

    map_free(m);
    TEST_END();
}

void reserve(void)
{
    TEST_START();
    map_t* m = map_create();

    assert(map_reserve(m, 100) == 0);
    assert(map_capacity(m) >= 100);

    map_free(m);
    TEST_END();
}

void shrink_to_fit(void)
{
    TEST_START();
    map_t* m = map_create();

    assert(map_insert(m, 0, 0) == 0);
    assert(map_insert(m, 1, 1) == 0);
    assert(map_insert(m, 2, 2) == 0);
    assert(map_insert(m, 3, 3) == 0);
    assert(map_insert(m, 4, 4) == 0);
    assert(map_insert(m, 5, 5) == 0);
    assert(map_insert(m, 6, 6) == 0);
    assert(map_insert(m, 7, 7) == 0);
    assert(map_insert(m, 8, 8) == 0);
    assert(map_insert(m, 9, 9) == 0);
    assert(map_insert(m, 10, 10) == 0);
    assert(map_insert(m, 11, 11) == 0);
    assert(map_insert(m, 12, 12) == 0);
    assert(map_insert(m, 13, 13) == 0);
    assert(map_insert(m, 14, 14) == 0);
    assert(map_insert(m, 15, 15) == 0);
    assert(map_insert(m, 16, 16) == 0);
    assert(map_insert(m, 17, 17) == 0);
    assert(map_insert(m, 18, 18) == 0);
    assert(map_insert(m, 19, 19) == 0);
    assert(map_insert(m, 20, 20) == 0);
    assert(map_insert(m, 21, 21) == 0);
    assert(map_insert(m, 22, 22) == 0);
    assert(map_insert(m, 23, 23) == 0);
    assert(map_insert(m, 24, 24) == 0);
    assert(map_insert(m, 25, 25) == 0);
    assert(map_insert(m, 26, 26) == 0);
    assert(map_insert(m, 27, 27) == 0);
    assert(map_insert(m, 28, 28) == 0);
    assert(map_insert(m, 29, 29) == 0);
    assert(map_insert(m, 30, 30) == 0);
    assert(map_insert(m, 31, 31) == 0);
    assert(map_insert(m, 32, 32) == 0);
    assert(map_insert(m, 33, 33) == 0);
    assert(map_insert(m, 34, 34) == 0);
    assert(map_insert(m, 35, 35) == 0);
    assert(map_insert(m, 36, 36) == 0);
    assert(map_insert(m, 37, 37) == 0);
    assert(map_insert(m, 38, 38) == 0);
    assert(map_insert(m, 39, 39) == 0);
    assert(map_insert(m, 40, 40) == 0);
    assert(map_insert(m, 41, 41) == 0);
    assert(map_insert(m, 42, 42) == 0);
    assert(map_insert(m, 43, 43) == 0);
    assert(map_insert(m, 44, 44) == 0);
    assert(map_insert(m, 45, 45) == 0);
    assert(map_insert(m, 46, 46) == 0);
    assert(map_insert(m, 47, 47) == 0);
    assert(map_insert(m, 48, 48) == 0);
    assert(map_insert(m, 49, 49) == 0);

    assert(map_size(m) == 50);

    assert(map_shrink_to_fit(m) == 0);
    assert(
        map_capacity(m) == (map_size(m) / FIT_LOAD_FACTOR) * MAX_LOAD_FACTOR);

    map_free(m);
    TEST_END();
}

void get_or_insert(void)
{
    TEST_START();
    map_t* m = map_create();

    assert(map_get_or_insert(m, 0, 0) != NULL);
    assert(map_get_or_insert(m, 1, 1) != NULL);
    assert(map_get_or_insert(m, 2, 2) != NULL);
    assert(map_get_or_insert(m, 3, 3) != NULL);
    assert(map_get_or_insert(m, 4, 4) != NULL);
    assert(map_get_or_insert(m, 5, 5) != NULL);
    assert(map_get_or_insert(m, 6, 6) != NULL);
    assert(map_get_or_insert(m, 7, 7) != NULL);
    assert(map_get_or_insert(m, 8, 8) != NULL);
    assert(map_get_or_insert(m, 9, 9) != NULL);
    assert(map_get_or_insert(m, 10, 10) != NULL);
    assert(map_get_or_insert(m, 11, 11) != NULL);
    assert(map_get_or_insert(m, 12, 12) != NULL);
    assert(map_get_or_insert(m, 13, 13) != NULL);
    assert(map_get_or_insert(m, 14, 14) != NULL);
    assert(map_get_or_insert(m, 15, 15) != NULL);
    assert(map_get_or_insert(m, 16, 16) != NULL);
    assert(map_get_or_insert(m, 17, 17) != NULL);
    assert(map_get_or_insert(m, 18, 18) != NULL);
    assert(map_get_or_insert(m, 19, 19) != NULL);
    assert(map_get_or_insert(m, 20, 20) != NULL);
    assert(map_get_or_insert(m, 21, 21) != NULL);
    assert(map_get_or_insert(m, 22, 22) != NULL);
    assert(map_get_or_insert(m, 23, 23) != NULL);
    assert(map_get_or_insert(m, 24, 24) != NULL);
    assert(map_get_or_insert(m, 25, 25) != NULL);
    assert(map_get_or_insert(m, 26, 26) != NULL);
    assert(map_get_or_insert(m, 27, 27) != NULL);
    assert(map_get_or_insert(m, 28, 28) != NULL);
    assert(map_get_or_insert(m, 29, 29) != NULL);
    assert(map_get_or_insert(m, 30, 30) != NULL);
    assert(map_get_or_insert(m, 31, 31) != NULL);
    assert(map_get_or_insert(m, 32, 32) != NULL);
    assert(map_get_or_insert(m, 33, 33) != NULL);
    assert(map_get_or_insert(m, 34, 34) != NULL);
    assert(map_get_or_insert(m, 35, 35) != NULL);
    assert(map_get_or_insert(m, 36, 36) != NULL);
    assert(map_get_or_insert(m, 37, 37) != NULL);
    assert(map_get_or_insert(m, 38, 38) != NULL);
    assert(map_get_or_insert(m, 39, 39) != NULL);
    assert(map_get_or_insert(m, 40, 40) != NULL);
    assert(map_get_or_insert(m, 41, 41) != NULL);
    assert(map_get_or_insert(m, 42, 42) != NULL);
    assert(map_get_or_insert(m, 43, 43) != NULL);
    assert(map_get_or_insert(m, 44, 44) != NULL);
    assert(map_get_or_insert(m, 45, 45) != NULL);
    assert(map_get_or_insert(m, 46, 46) != NULL);
    assert(map_get_or_insert(m, 47, 47) != NULL);
    assert(map_get_or_insert(m, 48, 48) != NULL);
    assert(map_get_or_insert(m, 49, 49) != NULL);

    assert(map_size(m) == 50);

    assert(map_get(m, 0) != NULL);
    assert(map_get(m, 1) != NULL);
    assert(map_get(m, 2) != NULL);
    assert(map_get(m, 3) != NULL);
    assert(map_get(m, 4) != NULL);
    assert(map_get(m, 5) != NULL);
    assert(map_get(m, 6) != NULL);
    assert(map_get(m, 7) != NULL);
    assert(map_get(m, 8) != NULL);
    assert(map_get(m, 9) != NULL);
    assert(map_get(m, 10) != NULL);
    assert(map_get(m, 11) != NULL);
    assert(map_get(m, 12) != NULL);
    assert(map_get(m, 13) != NULL);
    assert(map_get(m, 14) != NULL);
    assert(map_get(m, 15) != NULL);
    assert(map_get(m, 16) != NULL);
    assert(map_get(m, 17) != NULL);
    assert(map_get(m, 18) != NULL);
    assert(map_get(m, 19) != NULL);
    assert(map_get(m, 20) != NULL);
    assert(map_get(m, 21) != NULL);
    assert(map_get(m, 22) != NULL);
    assert(map_get(m, 23) != NULL);
    assert(map_get(m, 24) != NULL);
    assert(map_get(m, 25) != NULL);
    assert(map_get(m, 26) != NULL);
    assert(map_get(m, 27) != NULL);
    assert(map_get(m, 28) != NULL);
    assert(map_get(m, 29) != NULL);
    assert(map_get(m, 30) != NULL);
    assert(map_get(m, 31) != NULL);
    assert(map_get(m, 32) != NULL);
    assert(map_get(m, 33) != NULL);
    assert(map_get(m, 34) != NULL);
    assert(map_get(m, 35) != NULL);
    assert(map_get(m, 36) != NULL);
    assert(map_get(m, 37) != NULL);
    assert(map_get(m, 38) != NULL);
    assert(map_get(m, 39) != NULL);
    assert(map_get(m, 40) != NULL);
    assert(map_get(m, 41) != NULL);
    assert(map_get(m, 42) != NULL);
    assert(map_get(m, 43) != NULL);
    assert(map_get(m, 44) != NULL);
    assert(map_get(m, 45) != NULL);
    assert(map_get(m, 46) != NULL);
    assert(map_get(m, 47) != NULL);
    assert(map_get(m, 48) != NULL);
    assert(map_get(m, 49) != NULL);

    assert(*map_get(m, 0) == 0);
    assert(*map_get(m, 1) == 1);
    assert(*map_get(m, 2) == 2);
    assert(*map_get(m, 3) == 3);
    assert(*map_get(m, 4) == 4);
    assert(*map_get(m, 5) == 5);
    assert(*map_get(m, 6) == 6);
    assert(*map_get(m, 7) == 7);
    assert(*map_get(m, 8) == 8);
    assert(*map_get(m, 9) == 9);
    assert(*map_get(m, 10) == 10);
    assert(*map_get(m, 11) == 11);
    assert(*map_get(m, 12) == 12);
    assert(*map_get(m, 13) == 13);
    assert(*map_get(m, 14) == 14);
    assert(*map_get(m, 15) == 15);
    assert(*map_get(m, 16) == 16);
    assert(*map_get(m, 17) == 17);
    assert(*map_get(m, 18) == 18);
    assert(*map_get(m, 19) == 19);
    assert(*map_get(m, 20) == 20);
    assert(*map_get(m, 21) == 21);
    assert(*map_get(m, 22) == 22);
    assert(*map_get(m, 23) == 23);
    assert(*map_get(m, 24) == 24);
    assert(*map_get(m, 25) == 25);
    assert(*map_get(m, 26) == 26);
    assert(*map_get(m, 27) == 27);
    assert(*map_get(m, 28) == 28);
    assert(*map_get(m, 29) == 29);
    assert(*map_get(m, 30) == 30);
    assert(*map_get(m, 31) == 31);
    assert(*map_get(m, 32) == 32);
    assert(*map_get(m, 33) == 33);
    assert(*map_get(m, 34) == 34);
    assert(*map_get(m, 35) == 35);
    assert(*map_get(m, 36) == 36);
    assert(*map_get(m, 37) == 37);
    assert(*map_get(m, 38) == 38);
    assert(*map_get(m, 39) == 39);
    assert(*map_get(m, 40) == 40);
    assert(*map_get(m, 41) == 41);
    assert(*map_get(m, 42) == 42);
    assert(*map_get(m, 43) == 43);
    assert(*map_get(m, 44) == 44);
    assert(*map_get(m, 45) == 45);
    assert(*map_get(m, 46) == 46);
    assert(*map_get(m, 47) == 47);
    assert(*map_get(m, 48) == 48);
    assert(*map_get(m, 49) == 49);

    map_free(m);
    TEST_END();
}

void insert_get(void)
{
    TEST_START();

    map_t* m = map_create();

    assert(map_insert(m, 0, 0) == 0);
    assert(map_insert(m, 1, 1) == 0);
    assert(map_insert(m, 2, 2) == 0);
    assert(map_insert(m, 3, 3) == 0);
    assert(map_insert(m, 4, 4) == 0);
    assert(map_insert(m, 5, 5) == 0);
    assert(map_insert(m, 6, 6) == 0);
    assert(map_insert(m, 7, 7) == 0);
    assert(map_insert(m, 8, 8) == 0);
    assert(map_insert(m, 9, 9) == 0);
    assert(map_insert(m, 10, 10) == 0);
    assert(map_insert(m, 11, 11) == 0);
    assert(map_insert(m, 12, 12) == 0);
    assert(map_insert(m, 13, 13) == 0);
    assert(map_insert(m, 14, 14) == 0);
    assert(map_insert(m, 15, 15) == 0);
    assert(map_insert(m, 16, 16) == 0);
    assert(map_insert(m, 17, 17) == 0);
    assert(map_insert(m, 18, 18) == 0);
    assert(map_insert(m, 19, 19) == 0);
    assert(map_insert(m, 20, 20) == 0);
    assert(map_insert(m, 21, 21) == 0);
    assert(map_insert(m, 22, 22) == 0);
    assert(map_insert(m, 23, 23) == 0);
    assert(map_insert(m, 24, 24) == 0);
    assert(map_insert(m, 25, 25) == 0);
    assert(map_insert(m, 26, 26) == 0);
    assert(map_insert(m, 27, 27) == 0);
    assert(map_insert(m, 28, 28) == 0);
    assert(map_insert(m, 29, 29) == 0);
    assert(map_insert(m, 30, 30) == 0);
    assert(map_insert(m, 31, 31) == 0);
    assert(map_insert(m, 32, 32) == 0);
    assert(map_insert(m, 33, 33) == 0);
    assert(map_insert(m, 34, 34) == 0);
    assert(map_insert(m, 35, 35) == 0);
    assert(map_insert(m, 36, 36) == 0);
    assert(map_insert(m, 37, 37) == 0);
    assert(map_insert(m, 38, 38) == 0);
    assert(map_insert(m, 39, 39) == 0);
    assert(map_insert(m, 40, 40) == 0);
    assert(map_insert(m, 41, 41) == 0);
    assert(map_insert(m, 42, 42) == 0);
    assert(map_insert(m, 43, 43) == 0);
    assert(map_insert(m, 44, 44) == 0);
    assert(map_insert(m, 45, 45) == 0);
    assert(map_insert(m, 46, 46) == 0);
    assert(map_insert(m, 47, 47) == 0);
    assert(map_insert(m, 48, 48) == 0);
    assert(map_insert(m, 49, 49) == 0);

    assert(map_size(m) == 50);

    assert(map_get(m, 0) != NULL);
    assert(map_get(m, 1) != NULL);
    assert(map_get(m, 2) != NULL);
    assert(map_get(m, 3) != NULL);
    assert(map_get(m, 4) != NULL);
    assert(map_get(m, 5) != NULL);
    assert(map_get(m, 6) != NULL);
    assert(map_get(m, 7) != NULL);
    assert(map_get(m, 8) != NULL);
    assert(map_get(m, 9) != NULL);
    assert(map_get(m, 10) != NULL);
    assert(map_get(m, 11) != NULL);
    assert(map_get(m, 12) != NULL);
    assert(map_get(m, 13) != NULL);
    assert(map_get(m, 14) != NULL);
    assert(map_get(m, 15) != NULL);
    assert(map_get(m, 16) != NULL);
    assert(map_get(m, 17) != NULL);
    assert(map_get(m, 18) != NULL);
    assert(map_get(m, 19) != NULL);
    assert(map_get(m, 20) != NULL);
    assert(map_get(m, 21) != NULL);
    assert(map_get(m, 22) != NULL);
    assert(map_get(m, 23) != NULL);
    assert(map_get(m, 24) != NULL);
    assert(map_get(m, 25) != NULL);
    assert(map_get(m, 26) != NULL);
    assert(map_get(m, 27) != NULL);
    assert(map_get(m, 28) != NULL);
    assert(map_get(m, 29) != NULL);
    assert(map_get(m, 30) != NULL);
    assert(map_get(m, 31) != NULL);
    assert(map_get(m, 32) != NULL);
    assert(map_get(m, 33) != NULL);
    assert(map_get(m, 34) != NULL);
    assert(map_get(m, 35) != NULL);
    assert(map_get(m, 36) != NULL);
    assert(map_get(m, 37) != NULL);
    assert(map_get(m, 38) != NULL);
    assert(map_get(m, 39) != NULL);
    assert(map_get(m, 40) != NULL);
    assert(map_get(m, 41) != NULL);
    assert(map_get(m, 42) != NULL);
    assert(map_get(m, 43) != NULL);
    assert(map_get(m, 44) != NULL);
    assert(map_get(m, 45) != NULL);
    assert(map_get(m, 46) != NULL);
    assert(map_get(m, 47) != NULL);
    assert(map_get(m, 48) != NULL);
    assert(map_get(m, 49) != NULL);

    assert(*map_get(m, 0) == 0);
    assert(*map_get(m, 1) == 1);
    assert(*map_get(m, 2) == 2);
    assert(*map_get(m, 3) == 3);
    assert(*map_get(m, 4) == 4);
    assert(*map_get(m, 5) == 5);
    assert(*map_get(m, 6) == 6);
    assert(*map_get(m, 7) == 7);
    assert(*map_get(m, 8) == 8);
    assert(*map_get(m, 9) == 9);
    assert(*map_get(m, 10) == 10);
    assert(*map_get(m, 11) == 11);
    assert(*map_get(m, 12) == 12);
    assert(*map_get(m, 13) == 13);
    assert(*map_get(m, 14) == 14);
    assert(*map_get(m, 15) == 15);
    assert(*map_get(m, 16) == 16);
    assert(*map_get(m, 17) == 17);
    assert(*map_get(m, 18) == 18);
    assert(*map_get(m, 19) == 19);
    assert(*map_get(m, 20) == 20);
    assert(*map_get(m, 21) == 21);
    assert(*map_get(m, 22) == 22);
    assert(*map_get(m, 23) == 23);
    assert(*map_get(m, 24) == 24);
    assert(*map_get(m, 25) == 25);
    assert(*map_get(m, 26) == 26);
    assert(*map_get(m, 27) == 27);
    assert(*map_get(m, 28) == 28);
    assert(*map_get(m, 29) == 29);
    assert(*map_get(m, 30) == 30);
    assert(*map_get(m, 31) == 31);
    assert(*map_get(m, 32) == 32);
    assert(*map_get(m, 33) == 33);
    assert(*map_get(m, 34) == 34);
    assert(*map_get(m, 35) == 35);
    assert(*map_get(m, 36) == 36);
    assert(*map_get(m, 37) == 37);
    assert(*map_get(m, 38) == 38);
    assert(*map_get(m, 39) == 39);
    assert(*map_get(m, 40) == 40);
    assert(*map_get(m, 41) == 41);
    assert(*map_get(m, 42) == 42);
    assert(*map_get(m, 43) == 43);
    assert(*map_get(m, 44) == 44);
    assert(*map_get(m, 45) == 45);
    assert(*map_get(m, 46) == 46);
    assert(*map_get(m, 47) == 47);
    assert(*map_get(m, 48) == 48);
    assert(*map_get(m, 49) == 49);
    map_free(m);

    TEST_END();
}

void create_free(void)
{
    TEST_START();
    map_t* m = map_create();

    map_free(m);
    TEST_END();
}

int main(void)
{
    insert_get();
    create_free();
    copy_pair();
    move_pair();
    get_or_insert();
    iter();
    mremove();
    reserve();
    shrink_to_fit();
    contains();
    return 0;
}
