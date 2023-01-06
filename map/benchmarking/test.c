#include "maps/map.h"

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

    assert(map_insert(m, "00", 0) == 0);
    assert(map_insert(m, "01", 1) == 0);
    assert(map_insert(m, "02", 2) == 0);
    assert(map_insert(m, "03", 3) == 0);
    assert(map_insert(m, "04", 4) == 0);
    assert(map_insert(m, "05", 5) == 0);
    assert(map_insert(m, "06", 6) == 0);
    assert(map_insert(m, "07", 7) == 0);
    assert(map_insert(m, "08", 8) == 0);
    assert(map_insert(m, "09", 9) == 0);
    assert(map_insert(m, "10", 10) == 0);
    assert(map_insert(m, "11", 11) == 0);
    assert(map_insert(m, "12", 12) == 0);
    assert(map_insert(m, "13", 13) == 0);
    assert(map_insert(m, "14", 14) == 0);
    assert(map_insert(m, "15", 15) == 0);
    assert(map_insert(m, "16", 16) == 0);
    assert(map_insert(m, "17", 17) == 0);
    assert(map_insert(m, "18", 18) == 0);
    assert(map_insert(m, "19", 19) == 0);
    assert(map_insert(m, "20", 20) == 0);
    assert(map_insert(m, "21", 21) == 0);
    assert(map_insert(m, "22", 22) == 0);
    assert(map_insert(m, "23", 23) == 0);
    assert(map_insert(m, "24", 24) == 0);
    assert(map_insert(m, "25", 25) == 0);
    assert(map_insert(m, "26", 26) == 0);
    assert(map_insert(m, "27", 27) == 0);
    assert(map_insert(m, "28", 28) == 0);
    assert(map_insert(m, "29", 29) == 0);
    assert(map_insert(m, "30", 30) == 0);
    assert(map_insert(m, "31", 31) == 0);
    assert(map_insert(m, "32", 32) == 0);
    assert(map_insert(m, "33", 33) == 0);
    assert(map_insert(m, "34", 34) == 0);
    assert(map_insert(m, "35", 35) == 0);
    assert(map_insert(m, "36", 36) == 0);
    assert(map_insert(m, "37", 37) == 0);
    assert(map_insert(m, "38", 38) == 0);
    assert(map_insert(m, "39", 39) == 0);
    assert(map_insert(m, "40", 40) == 0);
    assert(map_insert(m, "41", 41) == 0);
    assert(map_insert(m, "42", 42) == 0);
    assert(map_insert(m, "43", 43) == 0);
    assert(map_insert(m, "44", 44) == 0);
    assert(map_insert(m, "45", 45) == 0);
    assert(map_insert(m, "46", 46) == 0);
    assert(map_insert(m, "47", 47) == 0);
    assert(map_insert(m, "48", 48) == 0);
    assert(map_insert(m, "49", 49) == 0);

    assert(map_contains(m, "00"));
    assert(map_contains(m, "01"));
    assert(map_contains(m, "02"));
    assert(map_contains(m, "03"));
    assert(map_contains(m, "04"));
    assert(map_contains(m, "05"));
    assert(map_contains(m, "06"));
    assert(map_contains(m, "07"));
    assert(map_contains(m, "08"));
    assert(map_contains(m, "09"));
    assert(map_contains(m, "10"));
    assert(map_contains(m, "11"));
    assert(map_contains(m, "12"));
    assert(map_contains(m, "13"));
    assert(map_contains(m, "14"));
    assert(map_contains(m, "15"));
    assert(map_contains(m, "16"));
    assert(map_contains(m, "17"));
    assert(map_contains(m, "18"));
    assert(map_contains(m, "19"));
    assert(map_contains(m, "20"));
    assert(map_contains(m, "21"));
    assert(map_contains(m, "22"));
    assert(map_contains(m, "23"));
    assert(map_contains(m, "24"));
    assert(map_contains(m, "25"));
    assert(map_contains(m, "26"));
    assert(map_contains(m, "27"));
    assert(map_contains(m, "28"));
    assert(map_contains(m, "29"));
    assert(map_contains(m, "30"));
    assert(map_contains(m, "31"));
    assert(map_contains(m, "32"));
    assert(map_contains(m, "33"));
    assert(map_contains(m, "34"));
    assert(map_contains(m, "35"));
    assert(map_contains(m, "36"));
    assert(map_contains(m, "37"));
    assert(map_contains(m, "38"));
    assert(map_contains(m, "39"));
    assert(map_contains(m, "40"));
    assert(map_contains(m, "41"));
    assert(map_contains(m, "42"));
    assert(map_contains(m, "43"));
    assert(map_contains(m, "44"));
    assert(map_contains(m, "45"));
    assert(map_contains(m, "46"));
    assert(map_contains(m, "47"));
    assert(map_contains(m, "48"));
    assert(map_contains(m, "49"));

    map_free(m);
    TEST_END();
}

void iter(void)
{
    TEST_START();
    map_t* m = map_create();

    assert(map_insert(m, "00", 0) == 0);
    assert(map_insert(m, "01", 1) == 0);
    assert(map_insert(m, "02", 2) == 0);
    assert(map_insert(m, "03", 3) == 0);
    assert(map_insert(m, "04", 4) == 0);
    assert(map_insert(m, "05", 5) == 0);
    assert(map_insert(m, "06", 6) == 0);
    assert(map_insert(m, "07", 7) == 0);
    assert(map_insert(m, "08", 8) == 0);
    assert(map_insert(m, "09", 9) == 0);
    assert(map_insert(m, "10", 10) == 0);
    assert(map_insert(m, "11", 11) == 0);
    assert(map_insert(m, "12", 12) == 0);
    assert(map_insert(m, "13", 13) == 0);
    assert(map_insert(m, "14", 14) == 0);
    assert(map_insert(m, "15", 15) == 0);
    assert(map_insert(m, "16", 16) == 0);
    assert(map_insert(m, "17", 17) == 0);
    assert(map_insert(m, "18", 18) == 0);
    assert(map_insert(m, "19", 19) == 0);
    assert(map_insert(m, "20", 20) == 0);
    assert(map_insert(m, "21", 21) == 0);
    assert(map_insert(m, "22", 22) == 0);
    assert(map_insert(m, "23", 23) == 0);
    assert(map_insert(m, "24", 24) == 0);
    assert(map_insert(m, "25", 25) == 0);
    assert(map_insert(m, "26", 26) == 0);
    assert(map_insert(m, "27", 27) == 0);
    assert(map_insert(m, "28", 28) == 0);
    assert(map_insert(m, "29", 29) == 0);
    assert(map_insert(m, "30", 30) == 0);
    assert(map_insert(m, "31", 31) == 0);
    assert(map_insert(m, "32", 32) == 0);
    assert(map_insert(m, "33", 33) == 0);
    assert(map_insert(m, "34", 34) == 0);
    assert(map_insert(m, "35", 35) == 0);
    assert(map_insert(m, "36", 36) == 0);
    assert(map_insert(m, "37", 37) == 0);
    assert(map_insert(m, "38", 38) == 0);
    assert(map_insert(m, "39", 39) == 0);
    assert(map_insert(m, "40", 40) == 0);
    assert(map_insert(m, "41", 41) == 0);
    assert(map_insert(m, "42", 42) == 0);
    assert(map_insert(m, "43", 43) == 0);
    assert(map_insert(m, "44", 44) == 0);
    assert(map_insert(m, "45", 45) == 0);
    assert(map_insert(m, "46", 46) == 0);
    assert(map_insert(m, "47", 47) == 0);
    assert(map_insert(m, "48", 48) == 0);
    assert(map_insert(m, "49", 49) == 0);

    char* keys[] = { "00", "01", "02", "03", "04", "05", "06", "07", "08", "09",
        "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21",
        "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33",
        "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45",
        "46", "47", "48", "49" };

    uint32_t values[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
        16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33,
        34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49 };

    uintptr_t i = map_begin(m);
    const uintptr_t end = map_end(m);

    for (; i != end; i = map_next(m, i)) {
        assert(map_iter_key(m, i) != NULL);
        assert(map_iter_value(m, i) != NULL);
        char** ki = keys;
        char** const ke = keys + 50;
        for (; ki != ke; ++ki) {
            if (*ki && strcmp(*ki, *map_iter_key(m, i))) {
                *ki = NULL;
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

void update_key(void)
{
    TEST_START();
    map_t* m = map_create();

    char* a00 = "00";
    char* a01 = "01";
    char* a02 = "02";
    char* a03 = "03";
    char* a04 = "04";
    char* a05 = "05";
    char* a06 = "06";
    char* a07 = "07";
    char* a08 = "08";
    char* a09 = "09";
    char* a10 = "10";
    char* a11 = "11";
    char* a12 = "12";
    char* a13 = "13";
    char* a14 = "14";
    char* a15 = "15";
    char* a16 = "16";
    char* a17 = "17";
    char* a18 = "18";
    char* a19 = "19";
    char* a20 = "20";
    char* a21 = "21";
    char* a22 = "22";
    char* a23 = "23";
    char* a24 = "24";
    char* a25 = "25";
    char* a26 = "26";
    char* a27 = "27";
    char* a28 = "28";
    char* a29 = "29";
    char* a30 = "30";
    char* a31 = "31";
    char* a32 = "32";
    char* a33 = "33";
    char* a34 = "34";
    char* a35 = "35";
    char* a36 = "36";
    char* a37 = "37";
    char* a38 = "38";
    char* a39 = "39";
    char* a40 = "40";
    char* a41 = "41";
    char* a42 = "42";
    char* a43 = "43";
    char* a44 = "44";
    char* a45 = "45";
    char* a46 = "46";
    char* a47 = "47";
    char* a48 = "48";
    char* a49 = "49";

    char* b00 = "00";
    char* b01 = "01";
    char* b02 = "02";
    char* b03 = "03";
    char* b04 = "04";
    char* b05 = "05";
    char* b06 = "06";
    char* b07 = "07";
    char* b08 = "08";
    char* b09 = "09";
    char* b10 = "10";
    char* b11 = "11";
    char* b12 = "12";
    char* b13 = "13";
    char* b14 = "14";
    char* b15 = "15";
    char* b16 = "16";
    char* b17 = "17";
    char* b18 = "18";
    char* b19 = "19";
    char* b20 = "20";
    char* b21 = "21";
    char* b22 = "22";
    char* b23 = "23";
    char* b24 = "24";
    char* b25 = "25";
    char* b26 = "26";
    char* b27 = "27";
    char* b28 = "28";
    char* b29 = "29";
    char* b30 = "30";
    char* b31 = "31";
    char* b32 = "32";
    char* b33 = "33";
    char* b34 = "34";
    char* b35 = "35";
    char* b36 = "36";
    char* b37 = "37";
    char* b38 = "38";
    char* b39 = "39";
    char* b40 = "40";
    char* b41 = "41";
    char* b42 = "42";
    char* b43 = "43";
    char* b44 = "44";
    char* b45 = "45";
    char* b46 = "46";
    char* b47 = "47";
    char* b48 = "48";
    char* b49 = "49";

    assert(map_insert(m, a00, 0) == 0);
    assert(map_insert(m, a01, 1) == 0);
    assert(map_insert(m, a02, 2) == 0);
    assert(map_insert(m, a03, 3) == 0);
    assert(map_insert(m, a04, 4) == 0);
    assert(map_insert(m, a05, 5) == 0);
    assert(map_insert(m, a06, 6) == 0);
    assert(map_insert(m, a07, 7) == 0);
    assert(map_insert(m, a08, 8) == 0);
    assert(map_insert(m, a09, 9) == 0);
    assert(map_insert(m, a10, 10) == 0);
    assert(map_insert(m, a11, 11) == 0);
    assert(map_insert(m, a12, 12) == 0);
    assert(map_insert(m, a13, 13) == 0);
    assert(map_insert(m, a14, 14) == 0);
    assert(map_insert(m, a15, 15) == 0);
    assert(map_insert(m, a16, 16) == 0);
    assert(map_insert(m, a17, 17) == 0);
    assert(map_insert(m, a18, 18) == 0);
    assert(map_insert(m, a19, 19) == 0);
    assert(map_insert(m, a20, 20) == 0);
    assert(map_insert(m, a21, 21) == 0);
    assert(map_insert(m, a22, 22) == 0);
    assert(map_insert(m, a23, 23) == 0);
    assert(map_insert(m, a24, 24) == 0);
    assert(map_insert(m, a25, 25) == 0);
    assert(map_insert(m, a26, 26) == 0);
    assert(map_insert(m, a27, 27) == 0);
    assert(map_insert(m, a28, 28) == 0);
    assert(map_insert(m, a29, 29) == 0);
    assert(map_insert(m, a30, 30) == 0);
    assert(map_insert(m, a31, 31) == 0);
    assert(map_insert(m, a32, 32) == 0);
    assert(map_insert(m, a33, 33) == 0);
    assert(map_insert(m, a34, 34) == 0);
    assert(map_insert(m, a35, 35) == 0);
    assert(map_insert(m, a36, 36) == 0);
    assert(map_insert(m, a37, 37) == 0);
    assert(map_insert(m, a38, 38) == 0);
    assert(map_insert(m, a39, 39) == 0);
    assert(map_insert(m, a40, 40) == 0);
    assert(map_insert(m, a41, 41) == 0);
    assert(map_insert(m, a42, 42) == 0);
    assert(map_insert(m, a43, 43) == 0);
    assert(map_insert(m, a44, 44) == 0);
    assert(map_insert(m, a45, 45) == 0);
    assert(map_insert(m, a46, 46) == 0);
    assert(map_insert(m, a47, 47) == 0);
    assert(map_insert(m, a48, 48) == 0);
    assert(map_insert(m, a49, 49) == 0);

    assert(map_get_key(m, a00) != NULL);
    assert(map_get_key(m, a01) != NULL);
    assert(map_get_key(m, a02) != NULL);
    assert(map_get_key(m, a03) != NULL);
    assert(map_get_key(m, a04) != NULL);
    assert(map_get_key(m, a05) != NULL);
    assert(map_get_key(m, a06) != NULL);
    assert(map_get_key(m, a07) != NULL);
    assert(map_get_key(m, a08) != NULL);
    assert(map_get_key(m, a09) != NULL);
    assert(map_get_key(m, a10) != NULL);
    assert(map_get_key(m, a11) != NULL);
    assert(map_get_key(m, a12) != NULL);
    assert(map_get_key(m, a13) != NULL);
    assert(map_get_key(m, a14) != NULL);
    assert(map_get_key(m, a15) != NULL);
    assert(map_get_key(m, a16) != NULL);
    assert(map_get_key(m, a17) != NULL);
    assert(map_get_key(m, a18) != NULL);
    assert(map_get_key(m, a19) != NULL);
    assert(map_get_key(m, a20) != NULL);
    assert(map_get_key(m, a21) != NULL);
    assert(map_get_key(m, a22) != NULL);
    assert(map_get_key(m, a23) != NULL);
    assert(map_get_key(m, a24) != NULL);
    assert(map_get_key(m, a25) != NULL);
    assert(map_get_key(m, a26) != NULL);
    assert(map_get_key(m, a27) != NULL);
    assert(map_get_key(m, a28) != NULL);
    assert(map_get_key(m, a29) != NULL);
    assert(map_get_key(m, a30) != NULL);
    assert(map_get_key(m, a31) != NULL);
    assert(map_get_key(m, a32) != NULL);
    assert(map_get_key(m, a33) != NULL);
    assert(map_get_key(m, a34) != NULL);
    assert(map_get_key(m, a35) != NULL);
    assert(map_get_key(m, a36) != NULL);
    assert(map_get_key(m, a37) != NULL);
    assert(map_get_key(m, a38) != NULL);
    assert(map_get_key(m, a39) != NULL);
    assert(map_get_key(m, a40) != NULL);
    assert(map_get_key(m, a41) != NULL);
    assert(map_get_key(m, a42) != NULL);
    assert(map_get_key(m, a43) != NULL);
    assert(map_get_key(m, a44) != NULL);
    assert(map_get_key(m, a45) != NULL);
    assert(map_get_key(m, a46) != NULL);
    assert(map_get_key(m, a47) != NULL);
    assert(map_get_key(m, a48) != NULL);
    assert(map_get_key(m, a49) != NULL);

    assert(*map_get_key(m, a00) == a00);
    assert(*map_get_key(m, a01) == a01);
    assert(*map_get_key(m, a02) == a02);
    assert(*map_get_key(m, a03) == a03);
    assert(*map_get_key(m, a04) == a04);
    assert(*map_get_key(m, a05) == a05);
    assert(*map_get_key(m, a06) == a06);
    assert(*map_get_key(m, a07) == a07);
    assert(*map_get_key(m, a08) == a08);
    assert(*map_get_key(m, a09) == a09);
    assert(*map_get_key(m, a10) == a10);
    assert(*map_get_key(m, a11) == a11);
    assert(*map_get_key(m, a12) == a12);
    assert(*map_get_key(m, a13) == a13);
    assert(*map_get_key(m, a14) == a14);
    assert(*map_get_key(m, a15) == a15);
    assert(*map_get_key(m, a16) == a16);
    assert(*map_get_key(m, a17) == a17);
    assert(*map_get_key(m, a18) == a18);
    assert(*map_get_key(m, a19) == a19);
    assert(*map_get_key(m, a20) == a20);
    assert(*map_get_key(m, a21) == a21);
    assert(*map_get_key(m, a22) == a22);
    assert(*map_get_key(m, a23) == a23);
    assert(*map_get_key(m, a24) == a24);
    assert(*map_get_key(m, a25) == a25);
    assert(*map_get_key(m, a26) == a26);
    assert(*map_get_key(m, a27) == a27);
    assert(*map_get_key(m, a28) == a28);
    assert(*map_get_key(m, a29) == a29);
    assert(*map_get_key(m, a30) == a30);
    assert(*map_get_key(m, a31) == a31);
    assert(*map_get_key(m, a32) == a32);
    assert(*map_get_key(m, a33) == a33);
    assert(*map_get_key(m, a34) == a34);
    assert(*map_get_key(m, a35) == a35);
    assert(*map_get_key(m, a36) == a36);
    assert(*map_get_key(m, a37) == a37);
    assert(*map_get_key(m, a38) == a38);
    assert(*map_get_key(m, a39) == a39);
    assert(*map_get_key(m, a40) == a40);
    assert(*map_get_key(m, a41) == a41);
    assert(*map_get_key(m, a42) == a42);
    assert(*map_get_key(m, a43) == a43);
    assert(*map_get_key(m, a44) == a44);
    assert(*map_get_key(m, a45) == a45);
    assert(*map_get_key(m, a46) == a46);
    assert(*map_get_key(m, a47) == a47);
    assert(*map_get_key(m, a48) == a48);
    assert(*map_get_key(m, a49) == a49);

    assert(map_update_key(m, b00) == 0);
    assert(map_update_key(m, b01) == 0);
    assert(map_update_key(m, b02) == 0);
    assert(map_update_key(m, b03) == 0);
    assert(map_update_key(m, b04) == 0);
    assert(map_update_key(m, b05) == 0);
    assert(map_update_key(m, b06) == 0);
    assert(map_update_key(m, b07) == 0);
    assert(map_update_key(m, b08) == 0);
    assert(map_update_key(m, b09) == 0);
    assert(map_update_key(m, b10) == 0);
    assert(map_update_key(m, b11) == 0);
    assert(map_update_key(m, b12) == 0);
    assert(map_update_key(m, b13) == 0);
    assert(map_update_key(m, b14) == 0);
    assert(map_update_key(m, b15) == 0);
    assert(map_update_key(m, b16) == 0);
    assert(map_update_key(m, b17) == 0);
    assert(map_update_key(m, b18) == 0);
    assert(map_update_key(m, b19) == 0);
    assert(map_update_key(m, b20) == 0);
    assert(map_update_key(m, b21) == 0);
    assert(map_update_key(m, b22) == 0);
    assert(map_update_key(m, b23) == 0);
    assert(map_update_key(m, b24) == 0);
    assert(map_update_key(m, b25) == 0);
    assert(map_update_key(m, b26) == 0);
    assert(map_update_key(m, b27) == 0);
    assert(map_update_key(m, b28) == 0);
    assert(map_update_key(m, b29) == 0);
    assert(map_update_key(m, b30) == 0);
    assert(map_update_key(m, b31) == 0);
    assert(map_update_key(m, b32) == 0);
    assert(map_update_key(m, b33) == 0);
    assert(map_update_key(m, b34) == 0);
    assert(map_update_key(m, b35) == 0);
    assert(map_update_key(m, b36) == 0);
    assert(map_update_key(m, b37) == 0);
    assert(map_update_key(m, b38) == 0);
    assert(map_update_key(m, b39) == 0);
    assert(map_update_key(m, b40) == 0);
    assert(map_update_key(m, b41) == 0);
    assert(map_update_key(m, b42) == 0);
    assert(map_update_key(m, b43) == 0);
    assert(map_update_key(m, b44) == 0);
    assert(map_update_key(m, b45) == 0);
    assert(map_update_key(m, b46) == 0);
    assert(map_update_key(m, b47) == 0);
    assert(map_update_key(m, b48) == 0);
    assert(map_update_key(m, b49) == 0);

    assert(*map_get_key(m, a00) == b00);
    assert(*map_get_key(m, a01) == b01);
    assert(*map_get_key(m, a02) == b02);
    assert(*map_get_key(m, a03) == b03);
    assert(*map_get_key(m, a04) == b04);
    assert(*map_get_key(m, a05) == b05);
    assert(*map_get_key(m, a06) == b06);
    assert(*map_get_key(m, a07) == b07);
    assert(*map_get_key(m, a08) == b08);
    assert(*map_get_key(m, a09) == b09);
    assert(*map_get_key(m, a10) == b10);
    assert(*map_get_key(m, a11) == b11);
    assert(*map_get_key(m, a12) == b12);
    assert(*map_get_key(m, a13) == b13);
    assert(*map_get_key(m, a14) == b14);
    assert(*map_get_key(m, a15) == b15);
    assert(*map_get_key(m, a16) == b16);
    assert(*map_get_key(m, a17) == b17);
    assert(*map_get_key(m, a18) == b18);
    assert(*map_get_key(m, a19) == b19);
    assert(*map_get_key(m, a20) == b20);
    assert(*map_get_key(m, a21) == b21);
    assert(*map_get_key(m, a22) == b22);
    assert(*map_get_key(m, a23) == b23);
    assert(*map_get_key(m, a24) == b24);
    assert(*map_get_key(m, a25) == b25);
    assert(*map_get_key(m, a26) == b26);
    assert(*map_get_key(m, a27) == b27);
    assert(*map_get_key(m, a28) == b28);
    assert(*map_get_key(m, a29) == b29);
    assert(*map_get_key(m, a30) == b30);
    assert(*map_get_key(m, a31) == b31);
    assert(*map_get_key(m, a32) == b32);
    assert(*map_get_key(m, a33) == b33);
    assert(*map_get_key(m, a34) == b34);
    assert(*map_get_key(m, a35) == b35);
    assert(*map_get_key(m, a36) == b36);
    assert(*map_get_key(m, a37) == b37);
    assert(*map_get_key(m, a38) == b38);
    assert(*map_get_key(m, a39) == b39);
    assert(*map_get_key(m, a40) == b40);
    assert(*map_get_key(m, a41) == b41);
    assert(*map_get_key(m, a42) == b42);
    assert(*map_get_key(m, a43) == b43);
    assert(*map_get_key(m, a44) == b44);
    assert(*map_get_key(m, a45) == b45);
    assert(*map_get_key(m, a46) == b46);
    assert(*map_get_key(m, a47) == b47);
    assert(*map_get_key(m, a48) == b48);
    assert(*map_get_key(m, a49) == b49);

    map_free(m);
    TEST_END();
}

void copy_pair(void)
{
    TEST_START();
    map_t* m = map_create();

    assert(map_insert(m, "00", 0) == 0);
    assert(map_insert(m, "01", 1) == 0);
    assert(map_insert(m, "02", 2) == 0);
    assert(map_insert(m, "03", 3) == 0);
    assert(map_insert(m, "04", 4) == 0);
    assert(map_insert(m, "05", 5) == 0);
    assert(map_insert(m, "06", 6) == 0);
    assert(map_insert(m, "07", 7) == 0);
    assert(map_insert(m, "08", 8) == 0);
    assert(map_insert(m, "09", 9) == 0);
    assert(map_insert(m, "10", 10) == 0);
    assert(map_insert(m, "11", 11) == 0);
    assert(map_insert(m, "12", 12) == 0);
    assert(map_insert(m, "13", 13) == 0);
    assert(map_insert(m, "14", 14) == 0);
    assert(map_insert(m, "15", 15) == 0);
    assert(map_insert(m, "16", 16) == 0);
    assert(map_insert(m, "17", 17) == 0);
    assert(map_insert(m, "18", 18) == 0);
    assert(map_insert(m, "19", 19) == 0);
    assert(map_insert(m, "20", 20) == 0);
    assert(map_insert(m, "21", 21) == 0);
    assert(map_insert(m, "22", 22) == 0);
    assert(map_insert(m, "23", 23) == 0);
    assert(map_insert(m, "24", 24) == 0);
    assert(map_insert(m, "25", 25) == 0);
    assert(map_insert(m, "26", 26) == 0);
    assert(map_insert(m, "27", 27) == 0);
    assert(map_insert(m, "28", 28) == 0);
    assert(map_insert(m, "29", 29) == 0);
    assert(map_insert(m, "30", 30) == 0);
    assert(map_insert(m, "31", 31) == 0);
    assert(map_insert(m, "32", 32) == 0);
    assert(map_insert(m, "33", 33) == 0);
    assert(map_insert(m, "34", 34) == 0);
    assert(map_insert(m, "35", 35) == 0);
    assert(map_insert(m, "36", 36) == 0);
    assert(map_insert(m, "37", 37) == 0);
    assert(map_insert(m, "38", 38) == 0);
    assert(map_insert(m, "39", 39) == 0);
    assert(map_insert(m, "40", 40) == 0);
    assert(map_insert(m, "41", 41) == 0);
    assert(map_insert(m, "42", 42) == 0);
    assert(map_insert(m, "43", 43) == 0);
    assert(map_insert(m, "44", 44) == 0);
    assert(map_insert(m, "45", 45) == 0);
    assert(map_insert(m, "46", 46) == 0);
    assert(map_insert(m, "47", 47) == 0);
    assert(map_insert(m, "48", 48) == 0);
    assert(map_insert(m, "49", 49) == 0);

    char* dest_key;
    uint32_t dest_val;

    assert(map_copy_pair(m, "00", &dest_key, &dest_val) == 0);
    assert(map_get(m, "00") != NULL);
    assert(strcmp(dest_key, "00") == 0);
    assert(dest_val == 0);

    assert(map_copy_pair(m, "01", &dest_key, &dest_val) == 0);
    assert(map_get(m, "01") != NULL);
    assert(strcmp(dest_key, "01") == 0);
    assert(dest_val == 1);

    assert(map_copy_pair(m, "02", &dest_key, &dest_val) == 0);
    assert(map_get(m, "02") != NULL);
    assert(strcmp(dest_key, "02") == 0);
    assert(dest_val == 2);

    assert(map_copy_pair(m, "03", &dest_key, &dest_val) == 0);
    assert(map_get(m, "03") != NULL);
    assert(strcmp(dest_key, "03") == 0);
    assert(dest_val == 3);

    assert(map_copy_pair(m, "04", &dest_key, &dest_val) == 0);
    assert(map_get(m, "04") != NULL);
    assert(strcmp(dest_key, "04") == 0);
    assert(dest_val == 4);

    assert(map_copy_pair(m, "05", &dest_key, &dest_val) == 0);
    assert(map_get(m, "05") != NULL);
    assert(strcmp(dest_key, "05") == 0);
    assert(dest_val == 5);

    assert(map_copy_pair(m, "06", &dest_key, &dest_val) == 0);
    assert(map_get(m, "06") != NULL);
    assert(strcmp(dest_key, "06") == 0);
    assert(dest_val == 6);

    assert(map_copy_pair(m, "07", &dest_key, &dest_val) == 0);
    assert(map_get(m, "07") != NULL);
    assert(strcmp(dest_key, "07") == 0);
    assert(dest_val == 7);

    assert(map_copy_pair(m, "08", &dest_key, &dest_val) == 0);
    assert(map_get(m, "08") != NULL);
    assert(strcmp(dest_key, "08") == 0);
    assert(dest_val == 8);

    assert(map_copy_pair(m, "09", &dest_key, &dest_val) == 0);
    assert(map_get(m, "09") != NULL);
    assert(strcmp(dest_key, "09") == 0);
    assert(dest_val == 9);

    assert(map_copy_pair(m, "10", &dest_key, &dest_val) == 0);
    assert(map_get(m, "10") != NULL);
    assert(strcmp(dest_key, "10") == 0);
    assert(dest_val == 10);

    assert(map_copy_pair(m, "11", &dest_key, &dest_val) == 0);
    assert(map_get(m, "11") != NULL);
    assert(strcmp(dest_key, "11") == 0);
    assert(dest_val == 11);

    assert(map_copy_pair(m, "12", &dest_key, &dest_val) == 0);
    assert(map_get(m, "12") != NULL);
    assert(strcmp(dest_key, "12") == 0);
    assert(dest_val == 12);

    assert(map_copy_pair(m, "13", &dest_key, &dest_val) == 0);
    assert(map_get(m, "13") != NULL);
    assert(strcmp(dest_key, "13") == 0);
    assert(dest_val == 13);

    assert(map_copy_pair(m, "14", &dest_key, &dest_val) == 0);
    assert(map_get(m, "14") != NULL);
    assert(strcmp(dest_key, "14") == 0);
    assert(dest_val == 14);

    assert(map_copy_pair(m, "15", &dest_key, &dest_val) == 0);
    assert(map_get(m, "15") != NULL);
    assert(strcmp(dest_key, "15") == 0);
    assert(dest_val == 15);

    assert(map_copy_pair(m, "16", &dest_key, &dest_val) == 0);
    assert(map_get(m, "16") != NULL);
    assert(strcmp(dest_key, "16") == 0);
    assert(dest_val == 16);

    assert(map_copy_pair(m, "17", &dest_key, &dest_val) == 0);
    assert(map_get(m, "17") != NULL);
    assert(strcmp(dest_key, "17") == 0);
    assert(dest_val == 17);

    assert(map_copy_pair(m, "18", &dest_key, &dest_val) == 0);
    assert(map_get(m, "18") != NULL);
    assert(strcmp(dest_key, "18") == 0);
    assert(dest_val == 18);

    assert(map_copy_pair(m, "19", &dest_key, &dest_val) == 0);
    assert(map_get(m, "19") != NULL);
    assert(strcmp(dest_key, "19") == 0);
    assert(dest_val == 19);

    assert(map_copy_pair(m, "20", &dest_key, &dest_val) == 0);
    assert(map_get(m, "20") != NULL);
    assert(strcmp(dest_key, "20") == 0);
    assert(dest_val == 20);

    assert(map_copy_pair(m, "21", &dest_key, &dest_val) == 0);
    assert(map_get(m, "21") != NULL);
    assert(strcmp(dest_key, "21") == 0);
    assert(dest_val == 21);

    assert(map_copy_pair(m, "22", &dest_key, &dest_val) == 0);
    assert(map_get(m, "22") != NULL);
    assert(strcmp(dest_key, "22") == 0);
    assert(dest_val == 22);

    assert(map_copy_pair(m, "23", &dest_key, &dest_val) == 0);
    assert(map_get(m, "23") != NULL);
    assert(strcmp(dest_key, "23") == 0);
    assert(dest_val == 23);

    assert(map_copy_pair(m, "24", &dest_key, &dest_val) == 0);
    assert(map_get(m, "24") != NULL);
    assert(strcmp(dest_key, "24") == 0);
    assert(dest_val == 24);

    assert(map_copy_pair(m, "25", &dest_key, &dest_val) == 0);
    assert(map_get(m, "25") != NULL);
    assert(strcmp(dest_key, "25") == 0);
    assert(dest_val == 25);

    assert(map_copy_pair(m, "26", &dest_key, &dest_val) == 0);
    assert(map_get(m, "26") != NULL);
    assert(strcmp(dest_key, "26") == 0);
    assert(dest_val == 26);

    assert(map_copy_pair(m, "27", &dest_key, &dest_val) == 0);
    assert(map_get(m, "27") != NULL);
    assert(strcmp(dest_key, "27") == 0);
    assert(dest_val == 27);

    assert(map_copy_pair(m, "28", &dest_key, &dest_val) == 0);
    assert(map_get(m, "28") != NULL);
    assert(strcmp(dest_key, "28") == 0);
    assert(dest_val == 28);

    assert(map_copy_pair(m, "29", &dest_key, &dest_val) == 0);
    assert(map_get(m, "29") != NULL);
    assert(strcmp(dest_key, "29") == 0);
    assert(dest_val == 29);

    assert(map_copy_pair(m, "30", &dest_key, &dest_val) == 0);
    assert(map_get(m, "30") != NULL);
    assert(strcmp(dest_key, "30") == 0);
    assert(dest_val == 30);

    assert(map_copy_pair(m, "31", &dest_key, &dest_val) == 0);
    assert(map_get(m, "31") != NULL);
    assert(strcmp(dest_key, "31") == 0);
    assert(dest_val == 31);

    assert(map_copy_pair(m, "32", &dest_key, &dest_val) == 0);
    assert(map_get(m, "32") != NULL);
    assert(strcmp(dest_key, "32") == 0);
    assert(dest_val == 32);

    assert(map_copy_pair(m, "33", &dest_key, &dest_val) == 0);
    assert(map_get(m, "33") != NULL);
    assert(strcmp(dest_key, "33") == 0);
    assert(dest_val == 33);

    assert(map_copy_pair(m, "34", &dest_key, &dest_val) == 0);
    assert(map_get(m, "34") != NULL);
    assert(strcmp(dest_key, "34") == 0);
    assert(dest_val == 34);

    assert(map_copy_pair(m, "35", &dest_key, &dest_val) == 0);
    assert(map_get(m, "35") != NULL);
    assert(strcmp(dest_key, "35") == 0);
    assert(dest_val == 35);

    assert(map_copy_pair(m, "36", &dest_key, &dest_val) == 0);
    assert(map_get(m, "36") != NULL);
    assert(strcmp(dest_key, "36") == 0);
    assert(dest_val == 36);

    assert(map_copy_pair(m, "37", &dest_key, &dest_val) == 0);
    assert(map_get(m, "37") != NULL);
    assert(strcmp(dest_key, "37") == 0);
    assert(dest_val == 37);

    assert(map_copy_pair(m, "38", &dest_key, &dest_val) == 0);
    assert(map_get(m, "38") != NULL);
    assert(strcmp(dest_key, "38") == 0);
    assert(dest_val == 38);

    assert(map_copy_pair(m, "39", &dest_key, &dest_val) == 0);
    assert(map_get(m, "39") != NULL);
    assert(strcmp(dest_key, "39") == 0);
    assert(dest_val == 39);

    assert(map_copy_pair(m, "40", &dest_key, &dest_val) == 0);
    assert(map_get(m, "40") != NULL);
    assert(strcmp(dest_key, "40") == 0);
    assert(dest_val == 40);

    assert(map_copy_pair(m, "41", &dest_key, &dest_val) == 0);
    assert(map_get(m, "41") != NULL);
    assert(strcmp(dest_key, "41") == 0);
    assert(dest_val == 41);

    assert(map_copy_pair(m, "42", &dest_key, &dest_val) == 0);
    assert(map_get(m, "42") != NULL);
    assert(strcmp(dest_key, "42") == 0);
    assert(dest_val == 42);

    assert(map_copy_pair(m, "43", &dest_key, &dest_val) == 0);
    assert(map_get(m, "43") != NULL);
    assert(strcmp(dest_key, "43") == 0);
    assert(dest_val == 43);

    assert(map_copy_pair(m, "44", &dest_key, &dest_val) == 0);
    assert(map_get(m, "44") != NULL);
    assert(strcmp(dest_key, "44") == 0);
    assert(dest_val == 44);

    assert(map_copy_pair(m, "45", &dest_key, &dest_val) == 0);
    assert(map_get(m, "45") != NULL);
    assert(strcmp(dest_key, "45") == 0);
    assert(dest_val == 45);

    assert(map_copy_pair(m, "46", &dest_key, &dest_val) == 0);
    assert(map_get(m, "46") != NULL);
    assert(strcmp(dest_key, "46") == 0);
    assert(dest_val == 46);

    assert(map_copy_pair(m, "47", &dest_key, &dest_val) == 0);
    assert(map_get(m, "47") != NULL);
    assert(strcmp(dest_key, "47") == 0);
    assert(dest_val == 47);

    assert(map_copy_pair(m, "48", &dest_key, &dest_val) == 0);
    assert(map_get(m, "48") != NULL);
    assert(strcmp(dest_key, "48") == 0);
    assert(dest_val == 48);

    assert(map_copy_pair(m, "49", &dest_key, &dest_val) == 0);
    assert(map_get(m, "49") != NULL);
    assert(strcmp(dest_key, "49") == 0);
    assert(dest_val == 49);

    assert(map_copy_pair(m, "00", NULL, &dest_val) == 0);
    assert(map_get(m, "00") != 0);
    assert(dest_val == 0);

    assert(map_copy_pair(m, "01", NULL, &dest_val) == 0);
    assert(map_get(m, "01") != 0);
    assert(dest_val == 1);

    assert(map_copy_pair(m, "02", NULL, &dest_val) == 0);
    assert(map_get(m, "02") != 0);
    assert(dest_val == 2);

    assert(map_copy_pair(m, "03", NULL, &dest_val) == 0);
    assert(map_get(m, "03") != 0);
    assert(dest_val == 3);

    assert(map_copy_pair(m, "04", NULL, &dest_val) == 0);
    assert(map_get(m, "04") != 0);
    assert(dest_val == 4);

    assert(map_copy_pair(m, "05", NULL, &dest_val) == 0);
    assert(map_get(m, "05") != 0);
    assert(dest_val == 5);

    assert(map_copy_pair(m, "06", NULL, &dest_val) == 0);
    assert(map_get(m, "06") != 0);
    assert(dest_val == 6);

    assert(map_copy_pair(m, "07", NULL, &dest_val) == 0);
    assert(map_get(m, "07") != 0);
    assert(dest_val == 7);

    assert(map_copy_pair(m, "08", NULL, &dest_val) == 0);
    assert(map_get(m, "08") != 0);
    assert(dest_val == 8);

    assert(map_copy_pair(m, "09", NULL, &dest_val) == 0);
    assert(map_get(m, "09") != 0);
    assert(dest_val == 9);

    assert(map_copy_pair(m, "10", NULL, &dest_val) == 0);
    assert(map_get(m, "10") != 0);
    assert(dest_val == 10);

    assert(map_copy_pair(m, "11", NULL, &dest_val) == 0);
    assert(map_get(m, "11") != 0);
    assert(dest_val == 11);

    assert(map_copy_pair(m, "12", NULL, &dest_val) == 0);
    assert(map_get(m, "12") != 0);
    assert(dest_val == 12);

    assert(map_copy_pair(m, "13", NULL, &dest_val) == 0);
    assert(map_get(m, "13") != 0);
    assert(dest_val == 13);

    assert(map_copy_pair(m, "14", NULL, &dest_val) == 0);
    assert(map_get(m, "14") != 0);
    assert(dest_val == 14);

    assert(map_copy_pair(m, "15", NULL, &dest_val) == 0);
    assert(map_get(m, "15") != 0);
    assert(dest_val == 15);

    assert(map_copy_pair(m, "16", NULL, &dest_val) == 0);
    assert(map_get(m, "16") != 0);
    assert(dest_val == 16);

    assert(map_copy_pair(m, "17", NULL, &dest_val) == 0);
    assert(map_get(m, "17") != 0);
    assert(dest_val == 17);

    assert(map_copy_pair(m, "18", NULL, &dest_val) == 0);
    assert(map_get(m, "18") != 0);
    assert(dest_val == 18);

    assert(map_copy_pair(m, "19", NULL, &dest_val) == 0);
    assert(map_get(m, "19") != 0);
    assert(dest_val == 19);

    assert(map_copy_pair(m, "20", NULL, &dest_val) == 0);
    assert(map_get(m, "20") != 0);
    assert(dest_val == 20);

    assert(map_copy_pair(m, "21", NULL, &dest_val) == 0);
    assert(map_get(m, "21") != 0);
    assert(dest_val == 21);

    assert(map_copy_pair(m, "22", NULL, &dest_val) == 0);
    assert(map_get(m, "22") != 0);
    assert(dest_val == 22);

    assert(map_copy_pair(m, "23", NULL, &dest_val) == 0);
    assert(map_get(m, "23") != 0);
    assert(dest_val == 23);

    assert(map_copy_pair(m, "24", NULL, &dest_val) == 0);
    assert(map_get(m, "24") != 0);
    assert(dest_val == 24);

    assert(map_copy_pair(m, "25", NULL, &dest_val) == 0);
    assert(map_get(m, "25") != 0);
    assert(dest_val == 25);

    assert(map_copy_pair(m, "26", NULL, &dest_val) == 0);
    assert(map_get(m, "26") != 0);
    assert(dest_val == 26);

    assert(map_copy_pair(m, "27", NULL, &dest_val) == 0);
    assert(map_get(m, "27") != 0);
    assert(dest_val == 27);

    assert(map_copy_pair(m, "28", NULL, &dest_val) == 0);
    assert(map_get(m, "28") != 0);
    assert(dest_val == 28);

    assert(map_copy_pair(m, "29", NULL, &dest_val) == 0);
    assert(map_get(m, "29") != 0);
    assert(dest_val == 29);

    assert(map_copy_pair(m, "30", NULL, &dest_val) == 0);
    assert(map_get(m, "30") != 0);
    assert(dest_val == 30);

    assert(map_copy_pair(m, "31", NULL, &dest_val) == 0);
    assert(map_get(m, "31") != 0);
    assert(dest_val == 31);

    assert(map_copy_pair(m, "32", NULL, &dest_val) == 0);
    assert(map_get(m, "32") != 0);
    assert(dest_val == 32);

    assert(map_copy_pair(m, "33", NULL, &dest_val) == 0);
    assert(map_get(m, "33") != 0);
    assert(dest_val == 33);

    assert(map_copy_pair(m, "34", NULL, &dest_val) == 0);
    assert(map_get(m, "34") != 0);
    assert(dest_val == 34);

    assert(map_copy_pair(m, "35", NULL, &dest_val) == 0);
    assert(map_get(m, "35") != 0);
    assert(dest_val == 35);

    assert(map_copy_pair(m, "36", NULL, &dest_val) == 0);
    assert(map_get(m, "36") != 0);
    assert(dest_val == 36);

    assert(map_copy_pair(m, "37", NULL, &dest_val) == 0);
    assert(map_get(m, "37") != 0);
    assert(dest_val == 37);

    assert(map_copy_pair(m, "38", NULL, &dest_val) == 0);
    assert(map_get(m, "38") != 0);
    assert(dest_val == 38);

    assert(map_copy_pair(m, "39", NULL, &dest_val) == 0);
    assert(map_get(m, "39") != 0);
    assert(dest_val == 39);

    assert(map_copy_pair(m, "40", NULL, &dest_val) == 0);
    assert(map_get(m, "40") != 0);
    assert(dest_val == 40);

    assert(map_copy_pair(m, "41", NULL, &dest_val) == 0);
    assert(map_get(m, "41") != 0);
    assert(dest_val == 41);

    assert(map_copy_pair(m, "42", NULL, &dest_val) == 0);
    assert(map_get(m, "42") != 0);
    assert(dest_val == 42);

    assert(map_copy_pair(m, "43", NULL, &dest_val) == 0);
    assert(map_get(m, "43") != 0);
    assert(dest_val == 43);

    assert(map_copy_pair(m, "44", NULL, &dest_val) == 0);
    assert(map_get(m, "44") != 0);
    assert(dest_val == 44);

    assert(map_copy_pair(m, "45", NULL, &dest_val) == 0);
    assert(map_get(m, "45") != 0);
    assert(dest_val == 45);

    assert(map_copy_pair(m, "46", NULL, &dest_val) == 0);
    assert(map_get(m, "46") != 0);
    assert(dest_val == 46);

    assert(map_copy_pair(m, "47", NULL, &dest_val) == 0);
    assert(map_get(m, "47") != 0);
    assert(dest_val == 47);

    assert(map_copy_pair(m, "48", NULL, &dest_val) == 0);
    assert(map_get(m, "48") != 0);
    assert(dest_val == 48);

    assert(map_copy_pair(m, "49", NULL, &dest_val) == 0);
    assert(map_get(m, "49") != 0);
    assert(dest_val == 49);

    assert(map_copy_pair(m, "00", &dest_key, NULL) == 0);
    assert(map_get(m, "00") != 0);
    assert(strcmp(dest_key, "00") == 0);

    assert(map_copy_pair(m, "01", &dest_key, NULL) == 0);
    assert(map_get(m, "01") != 0);
    assert(strcmp(dest_key, "01") == 0);

    assert(map_copy_pair(m, "02", &dest_key, NULL) == 0);
    assert(map_get(m, "02") != 0);
    assert(strcmp(dest_key, "02") == 0);

    assert(map_copy_pair(m, "03", &dest_key, NULL) == 0);
    assert(map_get(m, "03") != 0);
    assert(strcmp(dest_key, "03") == 0);

    assert(map_copy_pair(m, "04", &dest_key, NULL) == 0);
    assert(map_get(m, "04") != 0);
    assert(strcmp(dest_key, "04") == 0);

    assert(map_copy_pair(m, "05", &dest_key, NULL) == 0);
    assert(map_get(m, "05") != 0);
    assert(strcmp(dest_key, "05") == 0);

    assert(map_copy_pair(m, "06", &dest_key, NULL) == 0);
    assert(map_get(m, "06") != 0);
    assert(strcmp(dest_key, "06") == 0);

    assert(map_copy_pair(m, "07", &dest_key, NULL) == 0);
    assert(map_get(m, "07") != 0);
    assert(strcmp(dest_key, "07") == 0);

    assert(map_copy_pair(m, "08", &dest_key, NULL) == 0);
    assert(map_get(m, "08") != 0);
    assert(strcmp(dest_key, "08") == 0);

    assert(map_copy_pair(m, "09", &dest_key, NULL) == 0);
    assert(map_get(m, "09") != 0);
    assert(strcmp(dest_key, "09") == 0);

    assert(map_copy_pair(m, "10", &dest_key, NULL) == 0);
    assert(map_get(m, "10") != 0);
    assert(strcmp(dest_key, "10") == 0);

    assert(map_copy_pair(m, "11", &dest_key, NULL) == 0);
    assert(map_get(m, "11") != 0);
    assert(strcmp(dest_key, "11") == 0);

    assert(map_copy_pair(m, "12", &dest_key, NULL) == 0);
    assert(map_get(m, "12") != 0);
    assert(strcmp(dest_key, "12") == 0);

    assert(map_copy_pair(m, "13", &dest_key, NULL) == 0);
    assert(map_get(m, "13") != 0);
    assert(strcmp(dest_key, "13") == 0);

    assert(map_copy_pair(m, "14", &dest_key, NULL) == 0);
    assert(map_get(m, "14") != 0);
    assert(strcmp(dest_key, "14") == 0);

    assert(map_copy_pair(m, "15", &dest_key, NULL) == 0);
    assert(map_get(m, "15") != 0);
    assert(strcmp(dest_key, "15") == 0);

    assert(map_copy_pair(m, "16", &dest_key, NULL) == 0);
    assert(map_get(m, "16") != 0);
    assert(strcmp(dest_key, "16") == 0);

    assert(map_copy_pair(m, "17", &dest_key, NULL) == 0);
    assert(map_get(m, "17") != 0);
    assert(strcmp(dest_key, "17") == 0);

    assert(map_copy_pair(m, "18", &dest_key, NULL) == 0);
    assert(map_get(m, "18") != 0);
    assert(strcmp(dest_key, "18") == 0);

    assert(map_copy_pair(m, "19", &dest_key, NULL) == 0);
    assert(map_get(m, "19") != 0);
    assert(strcmp(dest_key, "19") == 0);

    assert(map_copy_pair(m, "20", &dest_key, NULL) == 0);
    assert(map_get(m, "20") != 0);
    assert(strcmp(dest_key, "20") == 0);

    assert(map_copy_pair(m, "21", &dest_key, NULL) == 0);
    assert(map_get(m, "21") != 0);
    assert(strcmp(dest_key, "21") == 0);

    assert(map_copy_pair(m, "22", &dest_key, NULL) == 0);
    assert(map_get(m, "22") != 0);
    assert(strcmp(dest_key, "22") == 0);

    assert(map_copy_pair(m, "23", &dest_key, NULL) == 0);
    assert(map_get(m, "23") != 0);
    assert(strcmp(dest_key, "23") == 0);

    assert(map_copy_pair(m, "24", &dest_key, NULL) == 0);
    assert(map_get(m, "24") != 0);
    assert(strcmp(dest_key, "24") == 0);

    assert(map_copy_pair(m, "25", &dest_key, NULL) == 0);
    assert(map_get(m, "25") != 0);
    assert(strcmp(dest_key, "25") == 0);

    assert(map_copy_pair(m, "26", &dest_key, NULL) == 0);
    assert(map_get(m, "26") != 0);
    assert(strcmp(dest_key, "26") == 0);

    assert(map_copy_pair(m, "27", &dest_key, NULL) == 0);
    assert(map_get(m, "27") != 0);
    assert(strcmp(dest_key, "27") == 0);

    assert(map_copy_pair(m, "28", &dest_key, NULL) == 0);
    assert(map_get(m, "28") != 0);
    assert(strcmp(dest_key, "28") == 0);

    assert(map_copy_pair(m, "29", &dest_key, NULL) == 0);
    assert(map_get(m, "29") != 0);
    assert(strcmp(dest_key, "29") == 0);

    assert(map_copy_pair(m, "30", &dest_key, NULL) == 0);
    assert(map_get(m, "30") != 0);
    assert(strcmp(dest_key, "30") == 0);

    assert(map_copy_pair(m, "31", &dest_key, NULL) == 0);
    assert(map_get(m, "31") != 0);
    assert(strcmp(dest_key, "31") == 0);

    assert(map_copy_pair(m, "32", &dest_key, NULL) == 0);
    assert(map_get(m, "32") != 0);
    assert(strcmp(dest_key, "32") == 0);

    assert(map_copy_pair(m, "33", &dest_key, NULL) == 0);
    assert(map_get(m, "33") != 0);
    assert(strcmp(dest_key, "33") == 0);

    assert(map_copy_pair(m, "34", &dest_key, NULL) == 0);
    assert(map_get(m, "34") != 0);
    assert(strcmp(dest_key, "34") == 0);

    assert(map_copy_pair(m, "35", &dest_key, NULL) == 0);
    assert(map_get(m, "35") != 0);
    assert(strcmp(dest_key, "35") == 0);

    assert(map_copy_pair(m, "36", &dest_key, NULL) == 0);
    assert(map_get(m, "36") != 0);
    assert(strcmp(dest_key, "36") == 0);

    assert(map_copy_pair(m, "37", &dest_key, NULL) == 0);
    assert(map_get(m, "37") != 0);
    assert(strcmp(dest_key, "37") == 0);

    assert(map_copy_pair(m, "38", &dest_key, NULL) == 0);
    assert(map_get(m, "38") != 0);
    assert(strcmp(dest_key, "38") == 0);

    assert(map_copy_pair(m, "39", &dest_key, NULL) == 0);
    assert(map_get(m, "39") != 0);
    assert(strcmp(dest_key, "39") == 0);

    assert(map_copy_pair(m, "40", &dest_key, NULL) == 0);
    assert(map_get(m, "40") != 0);
    assert(strcmp(dest_key, "40") == 0);

    assert(map_copy_pair(m, "41", &dest_key, NULL) == 0);
    assert(map_get(m, "41") != 0);
    assert(strcmp(dest_key, "41") == 0);

    assert(map_copy_pair(m, "42", &dest_key, NULL) == 0);
    assert(map_get(m, "42") != 0);
    assert(strcmp(dest_key, "42") == 0);

    assert(map_copy_pair(m, "43", &dest_key, NULL) == 0);
    assert(map_get(m, "43") != 0);
    assert(strcmp(dest_key, "43") == 0);

    assert(map_copy_pair(m, "44", &dest_key, NULL) == 0);
    assert(map_get(m, "44") != 0);
    assert(strcmp(dest_key, "44") == 0);

    assert(map_copy_pair(m, "45", &dest_key, NULL) == 0);
    assert(map_get(m, "45") != 0);
    assert(strcmp(dest_key, "45") == 0);

    assert(map_copy_pair(m, "46", &dest_key, NULL) == 0);
    assert(map_get(m, "46") != 0);
    assert(strcmp(dest_key, "46") == 0);

    assert(map_copy_pair(m, "47", &dest_key, NULL) == 0);
    assert(map_get(m, "47") != 0);
    assert(strcmp(dest_key, "47") == 0);

    assert(map_copy_pair(m, "48", &dest_key, NULL) == 0);
    assert(map_get(m, "48") != 0);
    assert(strcmp(dest_key, "48") == 0);

    assert(map_copy_pair(m, "49", &dest_key, NULL) == 0);
    assert(map_get(m, "49") != 0);
    assert(strcmp(dest_key, "49") == 0);

    assert(map_copy_pair(m, "00", NULL, NULL) == 0);
    assert(map_get(m, "00") != NULL);

    assert(map_copy_pair(m, "01", NULL, NULL) == 0);
    assert(map_get(m, "01") != NULL);

    assert(map_copy_pair(m, "02", NULL, NULL) == 0);
    assert(map_get(m, "02") != NULL);

    assert(map_copy_pair(m, "03", NULL, NULL) == 0);
    assert(map_get(m, "03") != NULL);

    assert(map_copy_pair(m, "04", NULL, NULL) == 0);
    assert(map_get(m, "04") != NULL);

    assert(map_copy_pair(m, "05", NULL, NULL) == 0);
    assert(map_get(m, "05") != NULL);

    assert(map_copy_pair(m, "06", NULL, NULL) == 0);
    assert(map_get(m, "06") != NULL);

    assert(map_copy_pair(m, "07", NULL, NULL) == 0);
    assert(map_get(m, "07") != NULL);

    assert(map_copy_pair(m, "08", NULL, NULL) == 0);
    assert(map_get(m, "08") != NULL);

    assert(map_copy_pair(m, "09", NULL, NULL) == 0);
    assert(map_get(m, "09") != NULL);

    assert(map_copy_pair(m, "10", NULL, NULL) == 0);
    assert(map_get(m, "10") != NULL);

    assert(map_copy_pair(m, "11", NULL, NULL) == 0);
    assert(map_get(m, "11") != NULL);

    assert(map_copy_pair(m, "12", NULL, NULL) == 0);
    assert(map_get(m, "12") != NULL);

    assert(map_copy_pair(m, "13", NULL, NULL) == 0);
    assert(map_get(m, "13") != NULL);

    assert(map_copy_pair(m, "14", NULL, NULL) == 0);
    assert(map_get(m, "14") != NULL);

    assert(map_copy_pair(m, "15", NULL, NULL) == 0);
    assert(map_get(m, "15") != NULL);

    assert(map_copy_pair(m, "16", NULL, NULL) == 0);
    assert(map_get(m, "16") != NULL);

    assert(map_copy_pair(m, "17", NULL, NULL) == 0);
    assert(map_get(m, "17") != NULL);

    assert(map_copy_pair(m, "18", NULL, NULL) == 0);
    assert(map_get(m, "18") != NULL);

    assert(map_copy_pair(m, "19", NULL, NULL) == 0);
    assert(map_get(m, "19") != NULL);

    assert(map_copy_pair(m, "20", NULL, NULL) == 0);
    assert(map_get(m, "20") != NULL);

    assert(map_copy_pair(m, "21", NULL, NULL) == 0);
    assert(map_get(m, "21") != NULL);

    assert(map_copy_pair(m, "22", NULL, NULL) == 0);
    assert(map_get(m, "22") != NULL);

    assert(map_copy_pair(m, "23", NULL, NULL) == 0);
    assert(map_get(m, "23") != NULL);

    assert(map_copy_pair(m, "24", NULL, NULL) == 0);
    assert(map_get(m, "24") != NULL);

    assert(map_copy_pair(m, "25", NULL, NULL) == 0);
    assert(map_get(m, "25") != NULL);

    assert(map_copy_pair(m, "26", NULL, NULL) == 0);
    assert(map_get(m, "26") != NULL);

    assert(map_copy_pair(m, "27", NULL, NULL) == 0);
    assert(map_get(m, "27") != NULL);

    assert(map_copy_pair(m, "28", NULL, NULL) == 0);
    assert(map_get(m, "28") != NULL);

    assert(map_copy_pair(m, "29", NULL, NULL) == 0);
    assert(map_get(m, "29") != NULL);

    assert(map_copy_pair(m, "30", NULL, NULL) == 0);
    assert(map_get(m, "30") != NULL);

    assert(map_copy_pair(m, "31", NULL, NULL) == 0);
    assert(map_get(m, "31") != NULL);

    assert(map_copy_pair(m, "32", NULL, NULL) == 0);
    assert(map_get(m, "32") != NULL);

    assert(map_copy_pair(m, "33", NULL, NULL) == 0);
    assert(map_get(m, "33") != NULL);

    assert(map_copy_pair(m, "34", NULL, NULL) == 0);
    assert(map_get(m, "34") != NULL);

    assert(map_copy_pair(m, "35", NULL, NULL) == 0);
    assert(map_get(m, "35") != NULL);

    assert(map_copy_pair(m, "36", NULL, NULL) == 0);
    assert(map_get(m, "36") != NULL);

    assert(map_copy_pair(m, "37", NULL, NULL) == 0);
    assert(map_get(m, "37") != NULL);

    assert(map_copy_pair(m, "38", NULL, NULL) == 0);
    assert(map_get(m, "38") != NULL);

    assert(map_copy_pair(m, "39", NULL, NULL) == 0);
    assert(map_get(m, "39") != NULL);

    assert(map_copy_pair(m, "40", NULL, NULL) == 0);
    assert(map_get(m, "40") != NULL);

    assert(map_copy_pair(m, "41", NULL, NULL) == 0);
    assert(map_get(m, "41") != NULL);

    assert(map_copy_pair(m, "42", NULL, NULL) == 0);
    assert(map_get(m, "42") != NULL);

    assert(map_copy_pair(m, "43", NULL, NULL) == 0);
    assert(map_get(m, "43") != NULL);

    assert(map_copy_pair(m, "44", NULL, NULL) == 0);
    assert(map_get(m, "44") != NULL);

    assert(map_copy_pair(m, "45", NULL, NULL) == 0);
    assert(map_get(m, "45") != NULL);

    assert(map_copy_pair(m, "46", NULL, NULL) == 0);
    assert(map_get(m, "46") != NULL);

    assert(map_copy_pair(m, "47", NULL, NULL) == 0);
    assert(map_get(m, "47") != NULL);

    assert(map_copy_pair(m, "48", NULL, NULL) == 0);
    assert(map_get(m, "48") != NULL);

    assert(map_copy_pair(m, "49", NULL, NULL) == 0);
    assert(map_get(m, "49") != NULL);

    map_free(m);
    TEST_END();
}

void move_pair(void)
{
    TEST_START();
    map_t* m = map_create();

    assert(map_insert(m, "00", 0) == 0);
    assert(map_insert(m, "01", 1) == 0);
    assert(map_insert(m, "02", 2) == 0);
    assert(map_insert(m, "03", 3) == 0);
    assert(map_insert(m, "04", 4) == 0);
    assert(map_insert(m, "05", 5) == 0);
    assert(map_insert(m, "06", 6) == 0);
    assert(map_insert(m, "07", 7) == 0);
    assert(map_insert(m, "08", 8) == 0);
    assert(map_insert(m, "09", 9) == 0);
    assert(map_insert(m, "10", 10) == 0);
    assert(map_insert(m, "11", 11) == 0);
    assert(map_insert(m, "12", 12) == 0);
    assert(map_insert(m, "13", 13) == 0);
    assert(map_insert(m, "14", 14) == 0);
    assert(map_insert(m, "15", 15) == 0);
    assert(map_insert(m, "16", 16) == 0);
    assert(map_insert(m, "17", 17) == 0);
    assert(map_insert(m, "18", 18) == 0);
    assert(map_insert(m, "19", 19) == 0);
    assert(map_insert(m, "20", 20) == 0);
    assert(map_insert(m, "21", 21) == 0);
    assert(map_insert(m, "22", 22) == 0);
    assert(map_insert(m, "23", 23) == 0);
    assert(map_insert(m, "24", 24) == 0);
    assert(map_insert(m, "25", 25) == 0);
    assert(map_insert(m, "26", 26) == 0);
    assert(map_insert(m, "27", 27) == 0);
    assert(map_insert(m, "28", 28) == 0);
    assert(map_insert(m, "29", 29) == 0);
    assert(map_insert(m, "30", 30) == 0);
    assert(map_insert(m, "31", 31) == 0);
    assert(map_insert(m, "32", 32) == 0);
    assert(map_insert(m, "33", 33) == 0);
    assert(map_insert(m, "34", 34) == 0);
    assert(map_insert(m, "35", 35) == 0);
    assert(map_insert(m, "36", 36) == 0);
    assert(map_insert(m, "37", 37) == 0);
    assert(map_insert(m, "38", 38) == 0);
    assert(map_insert(m, "39", 39) == 0);
    assert(map_insert(m, "40", 40) == 0);
    assert(map_insert(m, "41", 41) == 0);
    assert(map_insert(m, "42", 42) == 0);
    assert(map_insert(m, "43", 43) == 0);
    assert(map_insert(m, "44", 44) == 0);
    assert(map_insert(m, "45", 45) == 0);
    assert(map_insert(m, "46", 46) == 0);
    assert(map_insert(m, "47", 47) == 0);
    assert(map_insert(m, "48", 48) == 0);
    assert(map_insert(m, "49", 49) == 0);

    char* dest_key;
    uint32_t dest_val;

    assert(map_move_pair(m, "00", &dest_key, &dest_val) == 0);
    assert(map_get(m, "00") == NULL);
    assert(strcmp(dest_key, "00") == 0);
    assert(dest_val == 0);

    assert(map_move_pair(m, "01", &dest_key, &dest_val) == 0);
    assert(map_get(m, "01") == NULL);
    assert(strcmp(dest_key, "01") == 0);
    assert(dest_val == 1);

    assert(map_move_pair(m, "02", &dest_key, &dest_val) == 0);
    assert(map_get(m, "02") == NULL);
    assert(strcmp(dest_key, "02") == 0);
    assert(dest_val == 2);

    assert(map_move_pair(m, "03", &dest_key, &dest_val) == 0);
    assert(map_get(m, "03") == NULL);
    assert(strcmp(dest_key, "03") == 0);
    assert(dest_val == 3);

    assert(map_move_pair(m, "04", &dest_key, &dest_val) == 0);
    assert(map_get(m, "04") == NULL);
    assert(strcmp(dest_key, "04") == 0);
    assert(dest_val == 4);

    assert(map_move_pair(m, "05", &dest_key, &dest_val) == 0);
    assert(map_get(m, "05") == NULL);
    assert(strcmp(dest_key, "05") == 0);
    assert(dest_val == 5);

    assert(map_move_pair(m, "06", &dest_key, &dest_val) == 0);
    assert(map_get(m, "06") == NULL);
    assert(strcmp(dest_key, "06") == 0);
    assert(dest_val == 6);

    assert(map_move_pair(m, "07", &dest_key, &dest_val) == 0);
    assert(map_get(m, "07") == NULL);
    assert(strcmp(dest_key, "07") == 0);
    assert(dest_val == 7);

    assert(map_move_pair(m, "08", &dest_key, &dest_val) == 0);
    assert(map_get(m, "08") == NULL);
    assert(strcmp(dest_key, "08") == 0);
    assert(dest_val == 8);

    assert(map_move_pair(m, "09", &dest_key, &dest_val) == 0);
    assert(map_get(m, "09") == NULL);
    assert(strcmp(dest_key, "09") == 0);
    assert(dest_val == 9);

    assert(map_move_pair(m, "10", &dest_key, &dest_val) == 0);
    assert(map_get(m, "10") == NULL);
    assert(strcmp(dest_key, "10") == 0);
    assert(dest_val == 10);

    assert(map_move_pair(m, "11", &dest_key, &dest_val) == 0);
    assert(map_get(m, "11") == NULL);
    assert(strcmp(dest_key, "11") == 0);
    assert(dest_val == 11);

    assert(map_move_pair(m, "12", &dest_key, &dest_val) == 0);
    assert(map_get(m, "12") == NULL);
    assert(strcmp(dest_key, "12") == 0);
    assert(dest_val == 12);

    assert(map_move_pair(m, "13", &dest_key, &dest_val) == 0);
    assert(map_get(m, "13") == NULL);
    assert(strcmp(dest_key, "13") == 0);
    assert(dest_val == 13);

    assert(map_move_pair(m, "14", &dest_key, &dest_val) == 0);
    assert(map_get(m, "14") == NULL);
    assert(strcmp(dest_key, "14") == 0);
    assert(dest_val == 14);

    assert(map_move_pair(m, "15", &dest_key, &dest_val) == 0);
    assert(map_get(m, "15") == NULL);
    assert(strcmp(dest_key, "15") == 0);
    assert(dest_val == 15);

    assert(map_move_pair(m, "16", &dest_key, &dest_val) == 0);
    assert(map_get(m, "16") == NULL);
    assert(strcmp(dest_key, "16") == 0);
    assert(dest_val == 16);

    assert(map_move_pair(m, "17", &dest_key, &dest_val) == 0);
    assert(map_get(m, "17") == NULL);
    assert(strcmp(dest_key, "17") == 0);
    assert(dest_val == 17);

    assert(map_move_pair(m, "18", &dest_key, &dest_val) == 0);
    assert(map_get(m, "18") == NULL);
    assert(strcmp(dest_key, "18") == 0);
    assert(dest_val == 18);

    assert(map_move_pair(m, "19", &dest_key, &dest_val) == 0);
    assert(map_get(m, "19") == NULL);
    assert(strcmp(dest_key, "19") == 0);
    assert(dest_val == 19);

    assert(map_move_pair(m, "20", &dest_key, &dest_val) == 0);
    assert(map_get(m, "20") == NULL);
    assert(strcmp(dest_key, "20") == 0);
    assert(dest_val == 20);

    assert(map_move_pair(m, "21", &dest_key, &dest_val) == 0);
    assert(map_get(m, "21") == NULL);
    assert(strcmp(dest_key, "21") == 0);
    assert(dest_val == 21);

    assert(map_move_pair(m, "22", &dest_key, &dest_val) == 0);
    assert(map_get(m, "22") == NULL);
    assert(strcmp(dest_key, "22") == 0);
    assert(dest_val == 22);

    assert(map_move_pair(m, "23", &dest_key, &dest_val) == 0);
    assert(map_get(m, "23") == NULL);
    assert(strcmp(dest_key, "23") == 0);
    assert(dest_val == 23);

    assert(map_move_pair(m, "24", &dest_key, &dest_val) == 0);
    assert(map_get(m, "24") == NULL);
    assert(strcmp(dest_key, "24") == 0);
    assert(dest_val == 24);

    assert(map_move_pair(m, "25", &dest_key, &dest_val) == 0);
    assert(map_get(m, "25") == NULL);
    assert(strcmp(dest_key, "25") == 0);
    assert(dest_val == 25);

    assert(map_move_pair(m, "26", &dest_key, &dest_val) == 0);
    assert(map_get(m, "26") == NULL);
    assert(strcmp(dest_key, "26") == 0);
    assert(dest_val == 26);

    assert(map_move_pair(m, "27", &dest_key, &dest_val) == 0);
    assert(map_get(m, "27") == NULL);
    assert(strcmp(dest_key, "27") == 0);
    assert(dest_val == 27);

    assert(map_move_pair(m, "28", &dest_key, &dest_val) == 0);
    assert(map_get(m, "28") == NULL);
    assert(strcmp(dest_key, "28") == 0);
    assert(dest_val == 28);

    assert(map_move_pair(m, "29", &dest_key, &dest_val) == 0);
    assert(map_get(m, "29") == NULL);
    assert(strcmp(dest_key, "29") == 0);
    assert(dest_val == 29);

    assert(map_move_pair(m, "30", &dest_key, &dest_val) == 0);
    assert(map_get(m, "30") == NULL);
    assert(strcmp(dest_key, "30") == 0);
    assert(dest_val == 30);

    assert(map_move_pair(m, "31", &dest_key, &dest_val) == 0);
    assert(map_get(m, "31") == NULL);
    assert(strcmp(dest_key, "31") == 0);
    assert(dest_val == 31);

    assert(map_move_pair(m, "32", &dest_key, &dest_val) == 0);
    assert(map_get(m, "32") == NULL);
    assert(strcmp(dest_key, "32") == 0);
    assert(dest_val == 32);

    assert(map_move_pair(m, "33", &dest_key, &dest_val) == 0);
    assert(map_get(m, "33") == NULL);
    assert(strcmp(dest_key, "33") == 0);
    assert(dest_val == 33);

    assert(map_move_pair(m, "34", &dest_key, &dest_val) == 0);
    assert(map_get(m, "34") == NULL);
    assert(strcmp(dest_key, "34") == 0);
    assert(dest_val == 34);

    assert(map_move_pair(m, "35", &dest_key, &dest_val) == 0);
    assert(map_get(m, "35") == NULL);
    assert(strcmp(dest_key, "35") == 0);
    assert(dest_val == 35);

    assert(map_move_pair(m, "36", &dest_key, &dest_val) == 0);
    assert(map_get(m, "36") == NULL);
    assert(strcmp(dest_key, "36") == 0);
    assert(dest_val == 36);

    assert(map_move_pair(m, "37", &dest_key, &dest_val) == 0);
    assert(map_get(m, "37") == NULL);
    assert(strcmp(dest_key, "37") == 0);
    assert(dest_val == 37);

    assert(map_move_pair(m, "38", &dest_key, &dest_val) == 0);
    assert(map_get(m, "38") == NULL);
    assert(strcmp(dest_key, "38") == 0);
    assert(dest_val == 38);

    assert(map_move_pair(m, "39", &dest_key, &dest_val) == 0);
    assert(map_get(m, "39") == NULL);
    assert(strcmp(dest_key, "39") == 0);
    assert(dest_val == 39);

    assert(map_move_pair(m, "40", &dest_key, &dest_val) == 0);
    assert(map_get(m, "40") == NULL);
    assert(strcmp(dest_key, "40") == 0);
    assert(dest_val == 40);

    assert(map_move_pair(m, "41", &dest_key, &dest_val) == 0);
    assert(map_get(m, "41") == NULL);
    assert(strcmp(dest_key, "41") == 0);
    assert(dest_val == 41);

    assert(map_move_pair(m, "42", &dest_key, &dest_val) == 0);
    assert(map_get(m, "42") == NULL);
    assert(strcmp(dest_key, "42") == 0);
    assert(dest_val == 42);

    assert(map_move_pair(m, "43", &dest_key, &dest_val) == 0);
    assert(map_get(m, "43") == NULL);
    assert(strcmp(dest_key, "43") == 0);
    assert(dest_val == 43);

    assert(map_move_pair(m, "44", &dest_key, &dest_val) == 0);
    assert(map_get(m, "44") == NULL);
    assert(strcmp(dest_key, "44") == 0);
    assert(dest_val == 44);

    assert(map_move_pair(m, "45", &dest_key, &dest_val) == 0);
    assert(map_get(m, "45") == NULL);
    assert(strcmp(dest_key, "45") == 0);
    assert(dest_val == 45);

    assert(map_move_pair(m, "46", &dest_key, &dest_val) == 0);
    assert(map_get(m, "46") == NULL);
    assert(strcmp(dest_key, "46") == 0);
    assert(dest_val == 46);

    assert(map_move_pair(m, "47", &dest_key, &dest_val) == 0);
    assert(map_get(m, "47") == NULL);
    assert(strcmp(dest_key, "47") == 0);
    assert(dest_val == 47);

    assert(map_move_pair(m, "48", &dest_key, &dest_val) == 0);
    assert(map_get(m, "48") == NULL);
    assert(strcmp(dest_key, "48") == 0);
    assert(dest_val == 48);

    assert(map_move_pair(m, "49", &dest_key, &dest_val) == 0);
    assert(map_get(m, "49") == NULL);
    assert(strcmp(dest_key, "49") == 0);
    assert(dest_val == 49);

    assert(map_insert(m, "00", 0) == 0);
    assert(map_insert(m, "01", 1) == 0);
    assert(map_insert(m, "02", 2) == 0);
    assert(map_insert(m, "03", 3) == 0);
    assert(map_insert(m, "04", 4) == 0);
    assert(map_insert(m, "05", 5) == 0);
    assert(map_insert(m, "06", 6) == 0);
    assert(map_insert(m, "07", 7) == 0);
    assert(map_insert(m, "08", 8) == 0);
    assert(map_insert(m, "09", 9) == 0);
    assert(map_insert(m, "10", 10) == 0);
    assert(map_insert(m, "11", 11) == 0);
    assert(map_insert(m, "12", 12) == 0);
    assert(map_insert(m, "13", 13) == 0);
    assert(map_insert(m, "14", 14) == 0);
    assert(map_insert(m, "15", 15) == 0);
    assert(map_insert(m, "16", 16) == 0);
    assert(map_insert(m, "17", 17) == 0);
    assert(map_insert(m, "18", 18) == 0);
    assert(map_insert(m, "19", 19) == 0);
    assert(map_insert(m, "20", 20) == 0);
    assert(map_insert(m, "21", 21) == 0);
    assert(map_insert(m, "22", 22) == 0);
    assert(map_insert(m, "23", 23) == 0);
    assert(map_insert(m, "24", 24) == 0);
    assert(map_insert(m, "25", 25) == 0);
    assert(map_insert(m, "26", 26) == 0);
    assert(map_insert(m, "27", 27) == 0);
    assert(map_insert(m, "28", 28) == 0);
    assert(map_insert(m, "29", 29) == 0);
    assert(map_insert(m, "30", 30) == 0);
    assert(map_insert(m, "31", 31) == 0);
    assert(map_insert(m, "32", 32) == 0);
    assert(map_insert(m, "33", 33) == 0);
    assert(map_insert(m, "34", 34) == 0);
    assert(map_insert(m, "35", 35) == 0);
    assert(map_insert(m, "36", 36) == 0);
    assert(map_insert(m, "37", 37) == 0);
    assert(map_insert(m, "38", 38) == 0);
    assert(map_insert(m, "39", 39) == 0);
    assert(map_insert(m, "40", 40) == 0);
    assert(map_insert(m, "41", 41) == 0);
    assert(map_insert(m, "42", 42) == 0);
    assert(map_insert(m, "43", 43) == 0);
    assert(map_insert(m, "44", 44) == 0);
    assert(map_insert(m, "45", 45) == 0);
    assert(map_insert(m, "46", 46) == 0);
    assert(map_insert(m, "47", 47) == 0);
    assert(map_insert(m, "48", 48) == 0);
    assert(map_insert(m, "49", 49) == 0);

    assert(map_move_pair(m, "00", NULL, &dest_val) == 0);
    assert(map_get(m, "00") == 0);
    assert(dest_val == 0);

    assert(map_move_pair(m, "01", NULL, &dest_val) == 0);
    assert(map_get(m, "01") == 0);
    assert(dest_val == 1);

    assert(map_move_pair(m, "02", NULL, &dest_val) == 0);
    assert(map_get(m, "02") == 0);
    assert(dest_val == 2);

    assert(map_move_pair(m, "03", NULL, &dest_val) == 0);
    assert(map_get(m, "03") == 0);
    assert(dest_val == 3);

    assert(map_move_pair(m, "04", NULL, &dest_val) == 0);
    assert(map_get(m, "04") == 0);
    assert(dest_val == 4);

    assert(map_move_pair(m, "05", NULL, &dest_val) == 0);
    assert(map_get(m, "05") == 0);
    assert(dest_val == 5);

    assert(map_move_pair(m, "06", NULL, &dest_val) == 0);
    assert(map_get(m, "06") == 0);
    assert(dest_val == 6);

    assert(map_move_pair(m, "07", NULL, &dest_val) == 0);
    assert(map_get(m, "07") == 0);
    assert(dest_val == 7);

    assert(map_move_pair(m, "08", NULL, &dest_val) == 0);
    assert(map_get(m, "08") == 0);
    assert(dest_val == 8);

    assert(map_move_pair(m, "09", NULL, &dest_val) == 0);
    assert(map_get(m, "09") == 0);
    assert(dest_val == 9);

    assert(map_move_pair(m, "10", NULL, &dest_val) == 0);
    assert(map_get(m, "10") == 0);
    assert(dest_val == 10);

    assert(map_move_pair(m, "11", NULL, &dest_val) == 0);
    assert(map_get(m, "11") == 0);
    assert(dest_val == 11);

    assert(map_move_pair(m, "12", NULL, &dest_val) == 0);
    assert(map_get(m, "12") == 0);
    assert(dest_val == 12);

    assert(map_move_pair(m, "13", NULL, &dest_val) == 0);
    assert(map_get(m, "13") == 0);
    assert(dest_val == 13);

    assert(map_move_pair(m, "14", NULL, &dest_val) == 0);
    assert(map_get(m, "14") == 0);
    assert(dest_val == 14);

    assert(map_move_pair(m, "15", NULL, &dest_val) == 0);
    assert(map_get(m, "15") == 0);
    assert(dest_val == 15);

    assert(map_move_pair(m, "16", NULL, &dest_val) == 0);
    assert(map_get(m, "16") == 0);
    assert(dest_val == 16);

    assert(map_move_pair(m, "17", NULL, &dest_val) == 0);
    assert(map_get(m, "17") == 0);
    assert(dest_val == 17);

    assert(map_move_pair(m, "18", NULL, &dest_val) == 0);
    assert(map_get(m, "18") == 0);
    assert(dest_val == 18);

    assert(map_move_pair(m, "19", NULL, &dest_val) == 0);
    assert(map_get(m, "19") == 0);
    assert(dest_val == 19);

    assert(map_move_pair(m, "20", NULL, &dest_val) == 0);
    assert(map_get(m, "20") == 0);
    assert(dest_val == 20);

    assert(map_move_pair(m, "21", NULL, &dest_val) == 0);
    assert(map_get(m, "21") == 0);
    assert(dest_val == 21);

    assert(map_move_pair(m, "22", NULL, &dest_val) == 0);
    assert(map_get(m, "22") == 0);
    assert(dest_val == 22);

    assert(map_move_pair(m, "23", NULL, &dest_val) == 0);
    assert(map_get(m, "23") == 0);
    assert(dest_val == 23);

    assert(map_move_pair(m, "24", NULL, &dest_val) == 0);
    assert(map_get(m, "24") == 0);
    assert(dest_val == 24);

    assert(map_move_pair(m, "25", NULL, &dest_val) == 0);
    assert(map_get(m, "25") == 0);
    assert(dest_val == 25);

    assert(map_move_pair(m, "26", NULL, &dest_val) == 0);
    assert(map_get(m, "26") == 0);
    assert(dest_val == 26);

    assert(map_move_pair(m, "27", NULL, &dest_val) == 0);
    assert(map_get(m, "27") == 0);
    assert(dest_val == 27);

    assert(map_move_pair(m, "28", NULL, &dest_val) == 0);
    assert(map_get(m, "28") == 0);
    assert(dest_val == 28);

    assert(map_move_pair(m, "29", NULL, &dest_val) == 0);
    assert(map_get(m, "29") == 0);
    assert(dest_val == 29);

    assert(map_move_pair(m, "30", NULL, &dest_val) == 0);
    assert(map_get(m, "30") == 0);
    assert(dest_val == 30);

    assert(map_move_pair(m, "31", NULL, &dest_val) == 0);
    assert(map_get(m, "31") == 0);
    assert(dest_val == 31);

    assert(map_move_pair(m, "32", NULL, &dest_val) == 0);
    assert(map_get(m, "32") == 0);
    assert(dest_val == 32);

    assert(map_move_pair(m, "33", NULL, &dest_val) == 0);
    assert(map_get(m, "33") == 0);
    assert(dest_val == 33);

    assert(map_move_pair(m, "34", NULL, &dest_val) == 0);
    assert(map_get(m, "34") == 0);
    assert(dest_val == 34);

    assert(map_move_pair(m, "35", NULL, &dest_val) == 0);
    assert(map_get(m, "35") == 0);
    assert(dest_val == 35);

    assert(map_move_pair(m, "36", NULL, &dest_val) == 0);
    assert(map_get(m, "36") == 0);
    assert(dest_val == 36);

    assert(map_move_pair(m, "37", NULL, &dest_val) == 0);
    assert(map_get(m, "37") == 0);
    assert(dest_val == 37);

    assert(map_move_pair(m, "38", NULL, &dest_val) == 0);
    assert(map_get(m, "38") == 0);
    assert(dest_val == 38);

    assert(map_move_pair(m, "39", NULL, &dest_val) == 0);
    assert(map_get(m, "39") == 0);
    assert(dest_val == 39);

    assert(map_move_pair(m, "40", NULL, &dest_val) == 0);
    assert(map_get(m, "40") == 0);
    assert(dest_val == 40);

    assert(map_move_pair(m, "41", NULL, &dest_val) == 0);
    assert(map_get(m, "41") == 0);
    assert(dest_val == 41);

    assert(map_move_pair(m, "42", NULL, &dest_val) == 0);
    assert(map_get(m, "42") == 0);
    assert(dest_val == 42);

    assert(map_move_pair(m, "43", NULL, &dest_val) == 0);
    assert(map_get(m, "43") == 0);
    assert(dest_val == 43);

    assert(map_move_pair(m, "44", NULL, &dest_val) == 0);
    assert(map_get(m, "44") == 0);
    assert(dest_val == 44);

    assert(map_move_pair(m, "45", NULL, &dest_val) == 0);
    assert(map_get(m, "45") == 0);
    assert(dest_val == 45);

    assert(map_move_pair(m, "46", NULL, &dest_val) == 0);
    assert(map_get(m, "46") == 0);
    assert(dest_val == 46);

    assert(map_move_pair(m, "47", NULL, &dest_val) == 0);
    assert(map_get(m, "47") == 0);
    assert(dest_val == 47);

    assert(map_move_pair(m, "48", NULL, &dest_val) == 0);
    assert(map_get(m, "48") == 0);
    assert(dest_val == 48);

    assert(map_move_pair(m, "49", NULL, &dest_val) == 0);
    assert(map_get(m, "49") == 0);
    assert(dest_val == 49);

    assert(map_insert(m, "00", 0) == 0);
    assert(map_insert(m, "01", 1) == 0);
    assert(map_insert(m, "02", 2) == 0);
    assert(map_insert(m, "03", 3) == 0);
    assert(map_insert(m, "04", 4) == 0);
    assert(map_insert(m, "05", 5) == 0);
    assert(map_insert(m, "06", 6) == 0);
    assert(map_insert(m, "07", 7) == 0);
    assert(map_insert(m, "08", 8) == 0);
    assert(map_insert(m, "09", 9) == 0);
    assert(map_insert(m, "10", 10) == 0);
    assert(map_insert(m, "11", 11) == 0);
    assert(map_insert(m, "12", 12) == 0);
    assert(map_insert(m, "13", 13) == 0);
    assert(map_insert(m, "14", 14) == 0);
    assert(map_insert(m, "15", 15) == 0);
    assert(map_insert(m, "16", 16) == 0);
    assert(map_insert(m, "17", 17) == 0);
    assert(map_insert(m, "18", 18) == 0);
    assert(map_insert(m, "19", 19) == 0);
    assert(map_insert(m, "20", 20) == 0);
    assert(map_insert(m, "21", 21) == 0);
    assert(map_insert(m, "22", 22) == 0);
    assert(map_insert(m, "23", 23) == 0);
    assert(map_insert(m, "24", 24) == 0);
    assert(map_insert(m, "25", 25) == 0);
    assert(map_insert(m, "26", 26) == 0);
    assert(map_insert(m, "27", 27) == 0);
    assert(map_insert(m, "28", 28) == 0);
    assert(map_insert(m, "29", 29) == 0);
    assert(map_insert(m, "30", 30) == 0);
    assert(map_insert(m, "31", 31) == 0);
    assert(map_insert(m, "32", 32) == 0);
    assert(map_insert(m, "33", 33) == 0);
    assert(map_insert(m, "34", 34) == 0);
    assert(map_insert(m, "35", 35) == 0);
    assert(map_insert(m, "36", 36) == 0);
    assert(map_insert(m, "37", 37) == 0);
    assert(map_insert(m, "38", 38) == 0);
    assert(map_insert(m, "39", 39) == 0);
    assert(map_insert(m, "40", 40) == 0);
    assert(map_insert(m, "41", 41) == 0);
    assert(map_insert(m, "42", 42) == 0);
    assert(map_insert(m, "43", 43) == 0);
    assert(map_insert(m, "44", 44) == 0);
    assert(map_insert(m, "45", 45) == 0);
    assert(map_insert(m, "46", 46) == 0);
    assert(map_insert(m, "47", 47) == 0);
    assert(map_insert(m, "48", 48) == 0);
    assert(map_insert(m, "49", 49) == 0);

    assert(map_move_pair(m, "00", &dest_key, NULL) == 0);
    assert(map_get(m, "00") == 0);
    assert(strcmp(dest_key, "00") == 0);

    assert(map_move_pair(m, "01", &dest_key, NULL) == 0);
    assert(map_get(m, "01") == 0);
    assert(strcmp(dest_key, "01") == 0);

    assert(map_move_pair(m, "02", &dest_key, NULL) == 0);
    assert(map_get(m, "02") == 0);
    assert(strcmp(dest_key, "02") == 0);

    assert(map_move_pair(m, "03", &dest_key, NULL) == 0);
    assert(map_get(m, "03") == 0);
    assert(strcmp(dest_key, "03") == 0);

    assert(map_move_pair(m, "04", &dest_key, NULL) == 0);
    assert(map_get(m, "04") == 0);
    assert(strcmp(dest_key, "04") == 0);

    assert(map_move_pair(m, "05", &dest_key, NULL) == 0);
    assert(map_get(m, "05") == 0);
    assert(strcmp(dest_key, "05") == 0);

    assert(map_move_pair(m, "06", &dest_key, NULL) == 0);
    assert(map_get(m, "06") == 0);
    assert(strcmp(dest_key, "06") == 0);

    assert(map_move_pair(m, "07", &dest_key, NULL) == 0);
    assert(map_get(m, "07") == 0);
    assert(strcmp(dest_key, "07") == 0);

    assert(map_move_pair(m, "08", &dest_key, NULL) == 0);
    assert(map_get(m, "08") == 0);
    assert(strcmp(dest_key, "08") == 0);

    assert(map_move_pair(m, "09", &dest_key, NULL) == 0);
    assert(map_get(m, "09") == 0);
    assert(strcmp(dest_key, "09") == 0);

    assert(map_move_pair(m, "10", &dest_key, NULL) == 0);
    assert(map_get(m, "10") == 0);
    assert(strcmp(dest_key, "10") == 0);

    assert(map_move_pair(m, "11", &dest_key, NULL) == 0);
    assert(map_get(m, "11") == 0);
    assert(strcmp(dest_key, "11") == 0);

    assert(map_move_pair(m, "12", &dest_key, NULL) == 0);
    assert(map_get(m, "12") == 0);
    assert(strcmp(dest_key, "12") == 0);

    assert(map_move_pair(m, "13", &dest_key, NULL) == 0);
    assert(map_get(m, "13") == 0);
    assert(strcmp(dest_key, "13") == 0);

    assert(map_move_pair(m, "14", &dest_key, NULL) == 0);
    assert(map_get(m, "14") == 0);
    assert(strcmp(dest_key, "14") == 0);

    assert(map_move_pair(m, "15", &dest_key, NULL) == 0);
    assert(map_get(m, "15") == 0);
    assert(strcmp(dest_key, "15") == 0);

    assert(map_move_pair(m, "16", &dest_key, NULL) == 0);
    assert(map_get(m, "16") == 0);
    assert(strcmp(dest_key, "16") == 0);

    assert(map_move_pair(m, "17", &dest_key, NULL) == 0);
    assert(map_get(m, "17") == 0);
    assert(strcmp(dest_key, "17") == 0);

    assert(map_move_pair(m, "18", &dest_key, NULL) == 0);
    assert(map_get(m, "18") == 0);
    assert(strcmp(dest_key, "18") == 0);

    assert(map_move_pair(m, "19", &dest_key, NULL) == 0);
    assert(map_get(m, "19") == 0);
    assert(strcmp(dest_key, "19") == 0);

    assert(map_move_pair(m, "20", &dest_key, NULL) == 0);
    assert(map_get(m, "20") == 0);
    assert(strcmp(dest_key, "20") == 0);

    assert(map_move_pair(m, "21", &dest_key, NULL) == 0);
    assert(map_get(m, "21") == 0);
    assert(strcmp(dest_key, "21") == 0);

    assert(map_move_pair(m, "22", &dest_key, NULL) == 0);
    assert(map_get(m, "22") == 0);
    assert(strcmp(dest_key, "22") == 0);

    assert(map_move_pair(m, "23", &dest_key, NULL) == 0);
    assert(map_get(m, "23") == 0);
    assert(strcmp(dest_key, "23") == 0);

    assert(map_move_pair(m, "24", &dest_key, NULL) == 0);
    assert(map_get(m, "24") == 0);
    assert(strcmp(dest_key, "24") == 0);

    assert(map_move_pair(m, "25", &dest_key, NULL) == 0);
    assert(map_get(m, "25") == 0);
    assert(strcmp(dest_key, "25") == 0);

    assert(map_move_pair(m, "26", &dest_key, NULL) == 0);
    assert(map_get(m, "26") == 0);
    assert(strcmp(dest_key, "26") == 0);

    assert(map_move_pair(m, "27", &dest_key, NULL) == 0);
    assert(map_get(m, "27") == 0);
    assert(strcmp(dest_key, "27") == 0);

    assert(map_move_pair(m, "28", &dest_key, NULL) == 0);
    assert(map_get(m, "28") == 0);
    assert(strcmp(dest_key, "28") == 0);

    assert(map_move_pair(m, "29", &dest_key, NULL) == 0);
    assert(map_get(m, "29") == 0);
    assert(strcmp(dest_key, "29") == 0);

    assert(map_move_pair(m, "30", &dest_key, NULL) == 0);
    assert(map_get(m, "30") == 0);
    assert(strcmp(dest_key, "30") == 0);

    assert(map_move_pair(m, "31", &dest_key, NULL) == 0);
    assert(map_get(m, "31") == 0);
    assert(strcmp(dest_key, "31") == 0);

    assert(map_move_pair(m, "32", &dest_key, NULL) == 0);
    assert(map_get(m, "32") == 0);
    assert(strcmp(dest_key, "32") == 0);

    assert(map_move_pair(m, "33", &dest_key, NULL) == 0);
    assert(map_get(m, "33") == 0);
    assert(strcmp(dest_key, "33") == 0);

    assert(map_move_pair(m, "34", &dest_key, NULL) == 0);
    assert(map_get(m, "34") == 0);
    assert(strcmp(dest_key, "34") == 0);

    assert(map_move_pair(m, "35", &dest_key, NULL) == 0);
    assert(map_get(m, "35") == 0);
    assert(strcmp(dest_key, "35") == 0);

    assert(map_move_pair(m, "36", &dest_key, NULL) == 0);
    assert(map_get(m, "36") == 0);
    assert(strcmp(dest_key, "36") == 0);

    assert(map_move_pair(m, "37", &dest_key, NULL) == 0);
    assert(map_get(m, "37") == 0);
    assert(strcmp(dest_key, "37") == 0);

    assert(map_move_pair(m, "38", &dest_key, NULL) == 0);
    assert(map_get(m, "38") == 0);
    assert(strcmp(dest_key, "38") == 0);

    assert(map_move_pair(m, "39", &dest_key, NULL) == 0);
    assert(map_get(m, "39") == 0);
    assert(strcmp(dest_key, "39") == 0);

    assert(map_move_pair(m, "40", &dest_key, NULL) == 0);
    assert(map_get(m, "40") == 0);
    assert(strcmp(dest_key, "40") == 0);

    assert(map_move_pair(m, "41", &dest_key, NULL) == 0);
    assert(map_get(m, "41") == 0);
    assert(strcmp(dest_key, "41") == 0);

    assert(map_move_pair(m, "42", &dest_key, NULL) == 0);
    assert(map_get(m, "42") == 0);
    assert(strcmp(dest_key, "42") == 0);

    assert(map_move_pair(m, "43", &dest_key, NULL) == 0);
    assert(map_get(m, "43") == 0);
    assert(strcmp(dest_key, "43") == 0);

    assert(map_move_pair(m, "44", &dest_key, NULL) == 0);
    assert(map_get(m, "44") == 0);
    assert(strcmp(dest_key, "44") == 0);

    assert(map_move_pair(m, "45", &dest_key, NULL) == 0);
    assert(map_get(m, "45") == 0);
    assert(strcmp(dest_key, "45") == 0);

    assert(map_move_pair(m, "46", &dest_key, NULL) == 0);
    assert(map_get(m, "46") == 0);
    assert(strcmp(dest_key, "46") == 0);

    assert(map_move_pair(m, "47", &dest_key, NULL) == 0);
    assert(map_get(m, "47") == 0);
    assert(strcmp(dest_key, "47") == 0);

    assert(map_move_pair(m, "48", &dest_key, NULL) == 0);
    assert(map_get(m, "48") == 0);
    assert(strcmp(dest_key, "48") == 0);

    assert(map_move_pair(m, "49", &dest_key, NULL) == 0);
    assert(map_get(m, "49") == 0);
    assert(strcmp(dest_key, "49") == 0);

    assert(map_insert(m, "00", 0) == 0);
    assert(map_insert(m, "01", 1) == 0);
    assert(map_insert(m, "02", 2) == 0);
    assert(map_insert(m, "03", 3) == 0);
    assert(map_insert(m, "04", 4) == 0);
    assert(map_insert(m, "05", 5) == 0);
    assert(map_insert(m, "06", 6) == 0);
    assert(map_insert(m, "07", 7) == 0);
    assert(map_insert(m, "08", 8) == 0);
    assert(map_insert(m, "09", 9) == 0);
    assert(map_insert(m, "10", 10) == 0);
    assert(map_insert(m, "11", 11) == 0);
    assert(map_insert(m, "12", 12) == 0);
    assert(map_insert(m, "13", 13) == 0);
    assert(map_insert(m, "14", 14) == 0);
    assert(map_insert(m, "15", 15) == 0);
    assert(map_insert(m, "16", 16) == 0);
    assert(map_insert(m, "17", 17) == 0);
    assert(map_insert(m, "18", 18) == 0);
    assert(map_insert(m, "19", 19) == 0);
    assert(map_insert(m, "20", 20) == 0);
    assert(map_insert(m, "21", 21) == 0);
    assert(map_insert(m, "22", 22) == 0);
    assert(map_insert(m, "23", 23) == 0);
    assert(map_insert(m, "24", 24) == 0);
    assert(map_insert(m, "25", 25) == 0);
    assert(map_insert(m, "26", 26) == 0);
    assert(map_insert(m, "27", 27) == 0);
    assert(map_insert(m, "28", 28) == 0);
    assert(map_insert(m, "29", 29) == 0);
    assert(map_insert(m, "30", 30) == 0);
    assert(map_insert(m, "31", 31) == 0);
    assert(map_insert(m, "32", 32) == 0);
    assert(map_insert(m, "33", 33) == 0);
    assert(map_insert(m, "34", 34) == 0);
    assert(map_insert(m, "35", 35) == 0);
    assert(map_insert(m, "36", 36) == 0);
    assert(map_insert(m, "37", 37) == 0);
    assert(map_insert(m, "38", 38) == 0);
    assert(map_insert(m, "39", 39) == 0);
    assert(map_insert(m, "40", 40) == 0);
    assert(map_insert(m, "41", 41) == 0);
    assert(map_insert(m, "42", 42) == 0);
    assert(map_insert(m, "43", 43) == 0);
    assert(map_insert(m, "44", 44) == 0);
    assert(map_insert(m, "45", 45) == 0);
    assert(map_insert(m, "46", 46) == 0);
    assert(map_insert(m, "47", 47) == 0);
    assert(map_insert(m, "48", 48) == 0);
    assert(map_insert(m, "49", 49) == 0);

    assert(map_move_pair(m, "00", NULL, NULL) == 0);
    assert(map_get(m, "00") == NULL);

    assert(map_move_pair(m, "01", NULL, NULL) == 0);
    assert(map_get(m, "01") == NULL);

    assert(map_move_pair(m, "02", NULL, NULL) == 0);
    assert(map_get(m, "02") == NULL);

    assert(map_move_pair(m, "03", NULL, NULL) == 0);
    assert(map_get(m, "03") == NULL);

    assert(map_move_pair(m, "04", NULL, NULL) == 0);
    assert(map_get(m, "04") == NULL);

    assert(map_move_pair(m, "05", NULL, NULL) == 0);
    assert(map_get(m, "05") == NULL);

    assert(map_move_pair(m, "06", NULL, NULL) == 0);
    assert(map_get(m, "06") == NULL);

    assert(map_move_pair(m, "07", NULL, NULL) == 0);
    assert(map_get(m, "07") == NULL);

    assert(map_move_pair(m, "08", NULL, NULL) == 0);
    assert(map_get(m, "08") == NULL);

    assert(map_move_pair(m, "09", NULL, NULL) == 0);
    assert(map_get(m, "09") == NULL);

    assert(map_move_pair(m, "10", NULL, NULL) == 0);
    assert(map_get(m, "10") == NULL);

    assert(map_move_pair(m, "11", NULL, NULL) == 0);
    assert(map_get(m, "11") == NULL);

    assert(map_move_pair(m, "12", NULL, NULL) == 0);
    assert(map_get(m, "12") == NULL);

    assert(map_move_pair(m, "13", NULL, NULL) == 0);
    assert(map_get(m, "13") == NULL);

    assert(map_move_pair(m, "14", NULL, NULL) == 0);
    assert(map_get(m, "14") == NULL);

    assert(map_move_pair(m, "15", NULL, NULL) == 0);
    assert(map_get(m, "15") == NULL);

    assert(map_move_pair(m, "16", NULL, NULL) == 0);
    assert(map_get(m, "16") == NULL);

    assert(map_move_pair(m, "17", NULL, NULL) == 0);
    assert(map_get(m, "17") == NULL);

    assert(map_move_pair(m, "18", NULL, NULL) == 0);
    assert(map_get(m, "18") == NULL);

    assert(map_move_pair(m, "19", NULL, NULL) == 0);
    assert(map_get(m, "19") == NULL);

    assert(map_move_pair(m, "20", NULL, NULL) == 0);
    assert(map_get(m, "20") == NULL);

    assert(map_move_pair(m, "21", NULL, NULL) == 0);
    assert(map_get(m, "21") == NULL);

    assert(map_move_pair(m, "22", NULL, NULL) == 0);
    assert(map_get(m, "22") == NULL);

    assert(map_move_pair(m, "23", NULL, NULL) == 0);
    assert(map_get(m, "23") == NULL);

    assert(map_move_pair(m, "24", NULL, NULL) == 0);
    assert(map_get(m, "24") == NULL);

    assert(map_move_pair(m, "25", NULL, NULL) == 0);
    assert(map_get(m, "25") == NULL);

    assert(map_move_pair(m, "26", NULL, NULL) == 0);
    assert(map_get(m, "26") == NULL);

    assert(map_move_pair(m, "27", NULL, NULL) == 0);
    assert(map_get(m, "27") == NULL);

    assert(map_move_pair(m, "28", NULL, NULL) == 0);
    assert(map_get(m, "28") == NULL);

    assert(map_move_pair(m, "29", NULL, NULL) == 0);
    assert(map_get(m, "29") == NULL);

    assert(map_move_pair(m, "30", NULL, NULL) == 0);
    assert(map_get(m, "30") == NULL);

    assert(map_move_pair(m, "31", NULL, NULL) == 0);
    assert(map_get(m, "31") == NULL);

    assert(map_move_pair(m, "32", NULL, NULL) == 0);
    assert(map_get(m, "32") == NULL);

    assert(map_move_pair(m, "33", NULL, NULL) == 0);
    assert(map_get(m, "33") == NULL);

    assert(map_move_pair(m, "34", NULL, NULL) == 0);
    assert(map_get(m, "34") == NULL);

    assert(map_move_pair(m, "35", NULL, NULL) == 0);
    assert(map_get(m, "35") == NULL);

    assert(map_move_pair(m, "36", NULL, NULL) == 0);
    assert(map_get(m, "36") == NULL);

    assert(map_move_pair(m, "37", NULL, NULL) == 0);
    assert(map_get(m, "37") == NULL);

    assert(map_move_pair(m, "38", NULL, NULL) == 0);
    assert(map_get(m, "38") == NULL);

    assert(map_move_pair(m, "39", NULL, NULL) == 0);
    assert(map_get(m, "39") == NULL);

    assert(map_move_pair(m, "40", NULL, NULL) == 0);
    assert(map_get(m, "40") == NULL);

    assert(map_move_pair(m, "41", NULL, NULL) == 0);
    assert(map_get(m, "41") == NULL);

    assert(map_move_pair(m, "42", NULL, NULL) == 0);
    assert(map_get(m, "42") == NULL);

    assert(map_move_pair(m, "43", NULL, NULL) == 0);
    assert(map_get(m, "43") == NULL);

    assert(map_move_pair(m, "44", NULL, NULL) == 0);
    assert(map_get(m, "44") == NULL);

    assert(map_move_pair(m, "45", NULL, NULL) == 0);
    assert(map_get(m, "45") == NULL);

    assert(map_move_pair(m, "46", NULL, NULL) == 0);
    assert(map_get(m, "46") == NULL);

    assert(map_move_pair(m, "47", NULL, NULL) == 0);
    assert(map_get(m, "47") == NULL);

    assert(map_move_pair(m, "48", NULL, NULL) == 0);
    assert(map_get(m, "48") == NULL);

    assert(map_move_pair(m, "49", NULL, NULL) == 0);
    assert(map_get(m, "49") == NULL);

    assert(map_size(m) == 0);

    map_free(m);
    TEST_END();
}

void mremove(void)
{
    TEST_START();
    map_t* m = map_create();

    assert(map_insert(m, "00", 0) == 0);
    assert(map_insert(m, "01", 1) == 0);
    assert(map_insert(m, "02", 2) == 0);
    assert(map_insert(m, "03", 3) == 0);
    assert(map_insert(m, "04", 4) == 0);
    assert(map_insert(m, "05", 5) == 0);
    assert(map_insert(m, "06", 6) == 0);
    assert(map_insert(m, "07", 7) == 0);
    assert(map_insert(m, "08", 8) == 0);
    assert(map_insert(m, "09", 9) == 0);
    assert(map_insert(m, "10", 10) == 0);
    assert(map_insert(m, "11", 11) == 0);
    assert(map_insert(m, "12", 12) == 0);
    assert(map_insert(m, "13", 13) == 0);
    assert(map_insert(m, "14", 14) == 0);
    assert(map_insert(m, "15", 15) == 0);
    assert(map_insert(m, "16", 16) == 0);
    assert(map_insert(m, "17", 17) == 0);
    assert(map_insert(m, "18", 18) == 0);
    assert(map_insert(m, "19", 19) == 0);
    assert(map_insert(m, "20", 20) == 0);
    assert(map_insert(m, "21", 21) == 0);
    assert(map_insert(m, "22", 22) == 0);
    assert(map_insert(m, "23", 23) == 0);
    assert(map_insert(m, "24", 24) == 0);
    assert(map_insert(m, "25", 25) == 0);
    assert(map_insert(m, "26", 26) == 0);
    assert(map_insert(m, "27", 27) == 0);
    assert(map_insert(m, "28", 28) == 0);
    assert(map_insert(m, "29", 29) == 0);
    assert(map_insert(m, "30", 30) == 0);
    assert(map_insert(m, "31", 31) == 0);
    assert(map_insert(m, "32", 32) == 0);
    assert(map_insert(m, "33", 33) == 0);
    assert(map_insert(m, "34", 34) == 0);
    assert(map_insert(m, "35", 35) == 0);
    assert(map_insert(m, "36", 36) == 0);
    assert(map_insert(m, "37", 37) == 0);
    assert(map_insert(m, "38", 38) == 0);
    assert(map_insert(m, "39", 39) == 0);
    assert(map_insert(m, "40", 40) == 0);
    assert(map_insert(m, "41", 41) == 0);
    assert(map_insert(m, "42", 42) == 0);
    assert(map_insert(m, "43", 43) == 0);
    assert(map_insert(m, "44", 44) == 0);
    assert(map_insert(m, "45", 45) == 0);
    assert(map_insert(m, "46", 46) == 0);
    assert(map_insert(m, "47", 47) == 0);
    assert(map_insert(m, "48", 48) == 0);
    assert(map_insert(m, "49", 49) == 0);

    assert(map_size(m) == 50);

    assert(map_remove(m, "00") == 0);
    assert(map_remove(m, "01") == 0);
    assert(map_remove(m, "02") == 0);
    assert(map_remove(m, "03") == 0);
    assert(map_remove(m, "04") == 0);
    assert(map_remove(m, "05") == 0);
    assert(map_remove(m, "06") == 0);
    assert(map_remove(m, "07") == 0);
    assert(map_remove(m, "08") == 0);
    assert(map_remove(m, "09") == 0);
    assert(map_remove(m, "10") == 0);
    assert(map_remove(m, "11") == 0);
    assert(map_remove(m, "12") == 0);
    assert(map_remove(m, "13") == 0);
    assert(map_remove(m, "14") == 0);
    assert(map_remove(m, "15") == 0);
    assert(map_remove(m, "16") == 0);
    assert(map_remove(m, "17") == 0);
    assert(map_remove(m, "18") == 0);
    assert(map_remove(m, "19") == 0);
    assert(map_remove(m, "20") == 0);
    assert(map_remove(m, "21") == 0);
    assert(map_remove(m, "22") == 0);
    assert(map_remove(m, "23") == 0);
    assert(map_remove(m, "24") == 0);
    assert(map_remove(m, "25") == 0);
    assert(map_remove(m, "26") == 0);
    assert(map_remove(m, "27") == 0);
    assert(map_remove(m, "28") == 0);
    assert(map_remove(m, "29") == 0);
    assert(map_remove(m, "30") == 0);
    assert(map_remove(m, "31") == 0);
    assert(map_remove(m, "32") == 0);
    assert(map_remove(m, "33") == 0);
    assert(map_remove(m, "34") == 0);
    assert(map_remove(m, "35") == 0);
    assert(map_remove(m, "36") == 0);
    assert(map_remove(m, "37") == 0);
    assert(map_remove(m, "38") == 0);
    assert(map_remove(m, "39") == 0);
    assert(map_remove(m, "40") == 0);
    assert(map_remove(m, "41") == 0);
    assert(map_remove(m, "42") == 0);
    assert(map_remove(m, "43") == 0);
    assert(map_remove(m, "44") == 0);
    assert(map_remove(m, "45") == 0);
    assert(map_remove(m, "46") == 0);
    assert(map_remove(m, "47") == 0);
    assert(map_remove(m, "48") == 0);
    assert(map_remove(m, "49") == 0);

    assert(map_size(m) == 0);
    assert(map_capacity(m) == INITIAL_CAPACITY * MAX_LOAD_FACTOR);

    assert(map_insert(m, "00", 0) == 0);
    assert(map_insert(m, "01", 1) == 0);
    assert(map_insert(m, "02", 2) == 0);
    assert(map_insert(m, "03", 3) == 0);
    assert(map_insert(m, "04", 4) == 0);
    assert(map_insert(m, "05", 5) == 0);
    assert(map_insert(m, "06", 6) == 0);
    assert(map_insert(m, "07", 7) == 0);
    assert(map_insert(m, "08", 8) == 0);
    assert(map_insert(m, "09", 9) == 0);
    assert(map_insert(m, "10", 10) == 0);
    assert(map_insert(m, "11", 11) == 0);
    assert(map_insert(m, "12", 12) == 0);
    assert(map_insert(m, "13", 13) == 0);
    assert(map_insert(m, "14", 14) == 0);
    assert(map_insert(m, "15", 15) == 0);
    assert(map_insert(m, "16", 16) == 0);
    assert(map_insert(m, "17", 17) == 0);
    assert(map_insert(m, "18", 18) == 0);
    assert(map_insert(m, "19", 19) == 0);
    assert(map_insert(m, "20", 20) == 0);
    assert(map_insert(m, "21", 21) == 0);
    assert(map_insert(m, "22", 22) == 0);
    assert(map_insert(m, "23", 23) == 0);
    assert(map_insert(m, "24", 24) == 0);
    assert(map_insert(m, "25", 25) == 0);
    assert(map_insert(m, "26", 26) == 0);
    assert(map_insert(m, "27", 27) == 0);
    assert(map_insert(m, "28", 28) == 0);
    assert(map_insert(m, "29", 29) == 0);
    assert(map_insert(m, "30", 30) == 0);
    assert(map_insert(m, "31", 31) == 0);
    assert(map_insert(m, "32", 32) == 0);
    assert(map_insert(m, "33", 33) == 0);
    assert(map_insert(m, "34", 34) == 0);
    assert(map_insert(m, "35", 35) == 0);
    assert(map_insert(m, "36", 36) == 0);
    assert(map_insert(m, "37", 37) == 0);
    assert(map_insert(m, "38", 38) == 0);
    assert(map_insert(m, "39", 39) == 0);
    assert(map_insert(m, "40", 40) == 0);
    assert(map_insert(m, "41", 41) == 0);
    assert(map_insert(m, "42", 42) == 0);
    assert(map_insert(m, "43", 43) == 0);
    assert(map_insert(m, "44", 44) == 0);
    assert(map_insert(m, "45", 45) == 0);
    assert(map_insert(m, "46", 46) == 0);
    assert(map_insert(m, "47", 47) == 0);
    assert(map_insert(m, "48", 48) == 0);
    assert(map_insert(m, "49", 49) == 0);

    assert(map_remove(m, "00") == 0);
    assert(map_remove(m, "01") == 0);
    assert(map_remove(m, "02") == 0);
    assert(map_remove(m, "03") == 0);
    assert(map_remove(m, "04") == 0);
    assert(map_remove(m, "05") == 0);
    assert(map_remove(m, "06") == 0);
    assert(map_remove(m, "07") == 0);
    assert(map_remove(m, "08") == 0);
    assert(map_remove(m, "09") == 0);
    assert(map_remove(m, "10") == 0);
    assert(map_remove(m, "11") == 0);
    assert(map_remove(m, "12") == 0);
    assert(map_remove(m, "13") == 0);
    assert(map_remove(m, "14") == 0);
    assert(map_remove(m, "15") == 0);
    assert(map_remove(m, "16") == 0);
    assert(map_remove(m, "17") == 0);
    assert(map_remove(m, "18") == 0);
    assert(map_remove(m, "19") == 0);
    assert(map_remove(m, "20") == 0);
    assert(map_remove(m, "21") == 0);
    assert(map_remove(m, "22") == 0);
    assert(map_remove(m, "23") == 0);
    assert(map_remove(m, "24") == 0);
    assert(map_remove(m, "25") == 0);
    assert(map_remove(m, "26") == 0);
    assert(map_remove(m, "27") == 0);
    assert(map_remove(m, "28") == 0);
    assert(map_remove(m, "29") == 0);
    assert(map_remove(m, "30") == 0);
    assert(map_remove(m, "31") == 0);
    assert(map_remove(m, "32") == 0);
    assert(map_remove(m, "33") == 0);
    assert(map_remove(m, "34") == 0);
    assert(map_remove(m, "35") == 0);
    assert(map_remove(m, "36") == 0);
    assert(map_remove(m, "37") == 0);
    assert(map_remove(m, "38") == 0);
    assert(map_remove(m, "39") == 0);
    assert(map_remove(m, "40") == 0);
    assert(map_remove(m, "41") == 0);
    assert(map_remove(m, "42") == 0);
    assert(map_remove(m, "43") == 0);
    assert(map_remove(m, "44") == 0);
    assert(map_remove(m, "45") == 0);
    assert(map_remove(m, "46") == 0);
    assert(map_remove(m, "47") == 0);
    assert(map_remove(m, "48") == 0);
    assert(map_remove(m, "49") == 0);

    assert(map_size(m) == 0);

    assert(map_remove(m, "00") > 0);
    assert(map_remove(m, "01") > 0);
    assert(map_remove(m, "02") > 0);
    assert(map_remove(m, "03") > 0);
    assert(map_remove(m, "04") > 0);
    assert(map_remove(m, "05") > 0);
    assert(map_remove(m, "06") > 0);
    assert(map_remove(m, "07") > 0);
    assert(map_remove(m, "08") > 0);
    assert(map_remove(m, "09") > 0);
    assert(map_remove(m, "10") > 0);
    assert(map_remove(m, "11") > 0);
    assert(map_remove(m, "12") > 0);
    assert(map_remove(m, "13") > 0);
    assert(map_remove(m, "14") > 0);
    assert(map_remove(m, "15") > 0);
    assert(map_remove(m, "16") > 0);
    assert(map_remove(m, "17") > 0);
    assert(map_remove(m, "18") > 0);
    assert(map_remove(m, "19") > 0);
    assert(map_remove(m, "20") > 0);
    assert(map_remove(m, "21") > 0);
    assert(map_remove(m, "22") > 0);
    assert(map_remove(m, "23") > 0);
    assert(map_remove(m, "24") > 0);
    assert(map_remove(m, "25") > 0);
    assert(map_remove(m, "26") > 0);
    assert(map_remove(m, "27") > 0);
    assert(map_remove(m, "28") > 0);
    assert(map_remove(m, "29") > 0);
    assert(map_remove(m, "30") > 0);
    assert(map_remove(m, "31") > 0);
    assert(map_remove(m, "32") > 0);
    assert(map_remove(m, "33") > 0);
    assert(map_remove(m, "34") > 0);
    assert(map_remove(m, "35") > 0);
    assert(map_remove(m, "36") > 0);
    assert(map_remove(m, "37") > 0);
    assert(map_remove(m, "38") > 0);
    assert(map_remove(m, "39") > 0);
    assert(map_remove(m, "40") > 0);
    assert(map_remove(m, "41") > 0);
    assert(map_remove(m, "42") > 0);
    assert(map_remove(m, "43") > 0);
    assert(map_remove(m, "44") > 0);
    assert(map_remove(m, "45") > 0);
    assert(map_remove(m, "46") > 0);
    assert(map_remove(m, "47") > 0);
    assert(map_remove(m, "48") > 0);
    assert(map_remove(m, "49") > 0);

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

    assert(map_insert(m, "00", 0) == 0);
    assert(map_insert(m, "01", 1) == 0);
    assert(map_insert(m, "02", 2) == 0);
    assert(map_insert(m, "03", 3) == 0);
    assert(map_insert(m, "04", 4) == 0);
    assert(map_insert(m, "05", 5) == 0);
    assert(map_insert(m, "06", 6) == 0);
    assert(map_insert(m, "07", 7) == 0);
    assert(map_insert(m, "08", 8) == 0);
    assert(map_insert(m, "09", 9) == 0);
    assert(map_insert(m, "10", 10) == 0);
    assert(map_insert(m, "11", 11) == 0);
    assert(map_insert(m, "12", 12) == 0);
    assert(map_insert(m, "13", 13) == 0);
    assert(map_insert(m, "14", 14) == 0);
    assert(map_insert(m, "15", 15) == 0);
    assert(map_insert(m, "16", 16) == 0);
    assert(map_insert(m, "17", 17) == 0);
    assert(map_insert(m, "18", 18) == 0);
    assert(map_insert(m, "19", 19) == 0);
    assert(map_insert(m, "20", 20) == 0);
    assert(map_insert(m, "21", 21) == 0);
    assert(map_insert(m, "22", 22) == 0);
    assert(map_insert(m, "23", 23) == 0);
    assert(map_insert(m, "24", 24) == 0);
    assert(map_insert(m, "25", 25) == 0);
    assert(map_insert(m, "26", 26) == 0);
    assert(map_insert(m, "27", 27) == 0);
    assert(map_insert(m, "28", 28) == 0);
    assert(map_insert(m, "29", 29) == 0);
    assert(map_insert(m, "30", 30) == 0);
    assert(map_insert(m, "31", 31) == 0);
    assert(map_insert(m, "32", 32) == 0);
    assert(map_insert(m, "33", 33) == 0);
    assert(map_insert(m, "34", 34) == 0);
    assert(map_insert(m, "35", 35) == 0);
    assert(map_insert(m, "36", 36) == 0);
    assert(map_insert(m, "37", 37) == 0);
    assert(map_insert(m, "38", 38) == 0);
    assert(map_insert(m, "39", 39) == 0);
    assert(map_insert(m, "40", 40) == 0);
    assert(map_insert(m, "41", 41) == 0);
    assert(map_insert(m, "42", 42) == 0);
    assert(map_insert(m, "43", 43) == 0);
    assert(map_insert(m, "44", 44) == 0);
    assert(map_insert(m, "45", 45) == 0);
    assert(map_insert(m, "46", 46) == 0);
    assert(map_insert(m, "47", 47) == 0);
    assert(map_insert(m, "48", 48) == 0);
    assert(map_insert(m, "49", 49) == 0);

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

    assert(map_get_or_insert(m, "00", 0) != NULL);
    assert(map_get_or_insert(m, "01", 1) != NULL);
    assert(map_get_or_insert(m, "02", 2) != NULL);
    assert(map_get_or_insert(m, "03", 3) != NULL);
    assert(map_get_or_insert(m, "04", 4) != NULL);
    assert(map_get_or_insert(m, "05", 5) != NULL);
    assert(map_get_or_insert(m, "06", 6) != NULL);
    assert(map_get_or_insert(m, "07", 7) != NULL);
    assert(map_get_or_insert(m, "08", 8) != NULL);
    assert(map_get_or_insert(m, "09", 9) != NULL);
    assert(map_get_or_insert(m, "10", 10) != NULL);
    assert(map_get_or_insert(m, "11", 11) != NULL);
    assert(map_get_or_insert(m, "12", 12) != NULL);
    assert(map_get_or_insert(m, "13", 13) != NULL);
    assert(map_get_or_insert(m, "14", 14) != NULL);
    assert(map_get_or_insert(m, "15", 15) != NULL);
    assert(map_get_or_insert(m, "16", 16) != NULL);
    assert(map_get_or_insert(m, "17", 17) != NULL);
    assert(map_get_or_insert(m, "18", 18) != NULL);
    assert(map_get_or_insert(m, "19", 19) != NULL);
    assert(map_get_or_insert(m, "20", 20) != NULL);
    assert(map_get_or_insert(m, "21", 21) != NULL);
    assert(map_get_or_insert(m, "22", 22) != NULL);
    assert(map_get_or_insert(m, "23", 23) != NULL);
    assert(map_get_or_insert(m, "24", 24) != NULL);
    assert(map_get_or_insert(m, "25", 25) != NULL);
    assert(map_get_or_insert(m, "26", 26) != NULL);
    assert(map_get_or_insert(m, "27", 27) != NULL);
    assert(map_get_or_insert(m, "28", 28) != NULL);
    assert(map_get_or_insert(m, "29", 29) != NULL);
    assert(map_get_or_insert(m, "30", 30) != NULL);
    assert(map_get_or_insert(m, "31", 31) != NULL);
    assert(map_get_or_insert(m, "32", 32) != NULL);
    assert(map_get_or_insert(m, "33", 33) != NULL);
    assert(map_get_or_insert(m, "34", 34) != NULL);
    assert(map_get_or_insert(m, "35", 35) != NULL);
    assert(map_get_or_insert(m, "36", 36) != NULL);
    assert(map_get_or_insert(m, "37", 37) != NULL);
    assert(map_get_or_insert(m, "38", 38) != NULL);
    assert(map_get_or_insert(m, "39", 39) != NULL);
    assert(map_get_or_insert(m, "40", 40) != NULL);
    assert(map_get_or_insert(m, "41", 41) != NULL);
    assert(map_get_or_insert(m, "42", 42) != NULL);
    assert(map_get_or_insert(m, "43", 43) != NULL);
    assert(map_get_or_insert(m, "44", 44) != NULL);
    assert(map_get_or_insert(m, "45", 45) != NULL);
    assert(map_get_or_insert(m, "46", 46) != NULL);
    assert(map_get_or_insert(m, "47", 47) != NULL);
    assert(map_get_or_insert(m, "48", 48) != NULL);
    assert(map_get_or_insert(m, "49", 49) != NULL);

    assert(map_size(m) == 50);

    assert(map_get(m, "00") != NULL);
    assert(map_get(m, "01") != NULL);
    assert(map_get(m, "02") != NULL);
    assert(map_get(m, "03") != NULL);
    assert(map_get(m, "04") != NULL);
    assert(map_get(m, "05") != NULL);
    assert(map_get(m, "06") != NULL);
    assert(map_get(m, "07") != NULL);
    assert(map_get(m, "08") != NULL);
    assert(map_get(m, "09") != NULL);
    assert(map_get(m, "10") != NULL);
    assert(map_get(m, "11") != NULL);
    assert(map_get(m, "12") != NULL);
    assert(map_get(m, "13") != NULL);
    assert(map_get(m, "14") != NULL);
    assert(map_get(m, "15") != NULL);
    assert(map_get(m, "16") != NULL);
    assert(map_get(m, "17") != NULL);
    assert(map_get(m, "18") != NULL);
    assert(map_get(m, "19") != NULL);
    assert(map_get(m, "20") != NULL);
    assert(map_get(m, "21") != NULL);
    assert(map_get(m, "22") != NULL);
    assert(map_get(m, "23") != NULL);
    assert(map_get(m, "24") != NULL);
    assert(map_get(m, "25") != NULL);
    assert(map_get(m, "26") != NULL);
    assert(map_get(m, "27") != NULL);
    assert(map_get(m, "28") != NULL);
    assert(map_get(m, "29") != NULL);
    assert(map_get(m, "30") != NULL);
    assert(map_get(m, "31") != NULL);
    assert(map_get(m, "32") != NULL);
    assert(map_get(m, "33") != NULL);
    assert(map_get(m, "34") != NULL);
    assert(map_get(m, "35") != NULL);
    assert(map_get(m, "36") != NULL);
    assert(map_get(m, "37") != NULL);
    assert(map_get(m, "38") != NULL);
    assert(map_get(m, "39") != NULL);
    assert(map_get(m, "40") != NULL);
    assert(map_get(m, "41") != NULL);
    assert(map_get(m, "42") != NULL);
    assert(map_get(m, "43") != NULL);
    assert(map_get(m, "44") != NULL);
    assert(map_get(m, "45") != NULL);
    assert(map_get(m, "46") != NULL);
    assert(map_get(m, "47") != NULL);
    assert(map_get(m, "48") != NULL);
    assert(map_get(m, "49") != NULL);

    assert(*map_get(m, "00") == 0);
    assert(*map_get(m, "01") == 1);
    assert(*map_get(m, "02") == 2);
    assert(*map_get(m, "03") == 3);
    assert(*map_get(m, "04") == 4);
    assert(*map_get(m, "05") == 5);
    assert(*map_get(m, "06") == 6);
    assert(*map_get(m, "07") == 7);
    assert(*map_get(m, "08") == 8);
    assert(*map_get(m, "09") == 9);
    assert(*map_get(m, "10") == 10);
    assert(*map_get(m, "11") == 11);
    assert(*map_get(m, "12") == 12);
    assert(*map_get(m, "13") == 13);
    assert(*map_get(m, "14") == 14);
    assert(*map_get(m, "15") == 15);
    assert(*map_get(m, "16") == 16);
    assert(*map_get(m, "17") == 17);
    assert(*map_get(m, "18") == 18);
    assert(*map_get(m, "19") == 19);
    assert(*map_get(m, "20") == 20);
    assert(*map_get(m, "21") == 21);
    assert(*map_get(m, "22") == 22);
    assert(*map_get(m, "23") == 23);
    assert(*map_get(m, "24") == 24);
    assert(*map_get(m, "25") == 25);
    assert(*map_get(m, "26") == 26);
    assert(*map_get(m, "27") == 27);
    assert(*map_get(m, "28") == 28);
    assert(*map_get(m, "29") == 29);
    assert(*map_get(m, "30") == 30);
    assert(*map_get(m, "31") == 31);
    assert(*map_get(m, "32") == 32);
    assert(*map_get(m, "33") == 33);
    assert(*map_get(m, "34") == 34);
    assert(*map_get(m, "35") == 35);
    assert(*map_get(m, "36") == 36);
    assert(*map_get(m, "37") == 37);
    assert(*map_get(m, "38") == 38);
    assert(*map_get(m, "39") == 39);
    assert(*map_get(m, "40") == 40);
    assert(*map_get(m, "41") == 41);
    assert(*map_get(m, "42") == 42);
    assert(*map_get(m, "43") == 43);
    assert(*map_get(m, "44") == 44);
    assert(*map_get(m, "45") == 45);
    assert(*map_get(m, "46") == 46);
    assert(*map_get(m, "47") == 47);
    assert(*map_get(m, "48") == 48);
    assert(*map_get(m, "49") == 49);

    map_free(m);
    TEST_END();
}

void insert_get(void)
{
    TEST_START();

    map_t* m = map_create();

    assert(map_insert(m, "00", 0) == 0);
    assert(map_insert(m, "01", 1) == 0);
    assert(map_insert(m, "02", 2) == 0);
    assert(map_insert(m, "03", 3) == 0);
    assert(map_insert(m, "04", 4) == 0);
    assert(map_insert(m, "05", 5) == 0);
    assert(map_insert(m, "06", 6) == 0);
    assert(map_insert(m, "07", 7) == 0);
    assert(map_insert(m, "08", 8) == 0);
    assert(map_insert(m, "09", 9) == 0);
    assert(map_insert(m, "10", 10) == 0);
    assert(map_insert(m, "11", 11) == 0);
    assert(map_insert(m, "12", 12) == 0);
    assert(map_insert(m, "13", 13) == 0);
    assert(map_insert(m, "14", 14) == 0);
    assert(map_insert(m, "15", 15) == 0);
    assert(map_insert(m, "16", 16) == 0);
    assert(map_insert(m, "17", 17) == 0);
    assert(map_insert(m, "18", 18) == 0);
    assert(map_insert(m, "19", 19) == 0);
    assert(map_insert(m, "20", 20) == 0);
    assert(map_insert(m, "21", 21) == 0);
    assert(map_insert(m, "22", 22) == 0);
    assert(map_insert(m, "23", 23) == 0);
    assert(map_insert(m, "24", 24) == 0);
    assert(map_insert(m, "25", 25) == 0);
    assert(map_insert(m, "26", 26) == 0);
    assert(map_insert(m, "27", 27) == 0);
    assert(map_insert(m, "28", 28) == 0);
    assert(map_insert(m, "29", 29) == 0);
    assert(map_insert(m, "30", 30) == 0);
    assert(map_insert(m, "31", 31) == 0);
    assert(map_insert(m, "32", 32) == 0);
    assert(map_insert(m, "33", 33) == 0);
    assert(map_insert(m, "34", 34) == 0);
    assert(map_insert(m, "35", 35) == 0);
    assert(map_insert(m, "36", 36) == 0);
    assert(map_insert(m, "37", 37) == 0);
    assert(map_insert(m, "38", 38) == 0);
    assert(map_insert(m, "39", 39) == 0);
    assert(map_insert(m, "40", 40) == 0);
    assert(map_insert(m, "41", 41) == 0);
    assert(map_insert(m, "42", 42) == 0);
    assert(map_insert(m, "43", 43) == 0);
    assert(map_insert(m, "44", 44) == 0);
    assert(map_insert(m, "45", 45) == 0);
    assert(map_insert(m, "46", 46) == 0);
    assert(map_insert(m, "47", 47) == 0);
    assert(map_insert(m, "48", 48) == 0);
    assert(map_insert(m, "49", 49) == 0);

    assert(map_size(m) == 50);

    assert(map_get(m, "00") != NULL);
    assert(map_get(m, "01") != NULL);
    assert(map_get(m, "02") != NULL);
    assert(map_get(m, "03") != NULL);
    assert(map_get(m, "04") != NULL);
    assert(map_get(m, "05") != NULL);
    assert(map_get(m, "06") != NULL);
    assert(map_get(m, "07") != NULL);
    assert(map_get(m, "08") != NULL);
    assert(map_get(m, "09") != NULL);
    assert(map_get(m, "10") != NULL);
    assert(map_get(m, "11") != NULL);
    assert(map_get(m, "12") != NULL);
    assert(map_get(m, "13") != NULL);
    assert(map_get(m, "14") != NULL);
    assert(map_get(m, "15") != NULL);
    assert(map_get(m, "16") != NULL);
    assert(map_get(m, "17") != NULL);
    assert(map_get(m, "18") != NULL);
    assert(map_get(m, "19") != NULL);
    assert(map_get(m, "20") != NULL);
    assert(map_get(m, "21") != NULL);
    assert(map_get(m, "22") != NULL);
    assert(map_get(m, "23") != NULL);
    assert(map_get(m, "24") != NULL);
    assert(map_get(m, "25") != NULL);
    assert(map_get(m, "26") != NULL);
    assert(map_get(m, "27") != NULL);
    assert(map_get(m, "28") != NULL);
    assert(map_get(m, "29") != NULL);
    assert(map_get(m, "30") != NULL);
    assert(map_get(m, "31") != NULL);
    assert(map_get(m, "32") != NULL);
    assert(map_get(m, "33") != NULL);
    assert(map_get(m, "34") != NULL);
    assert(map_get(m, "35") != NULL);
    assert(map_get(m, "36") != NULL);
    assert(map_get(m, "37") != NULL);
    assert(map_get(m, "38") != NULL);
    assert(map_get(m, "39") != NULL);
    assert(map_get(m, "40") != NULL);
    assert(map_get(m, "41") != NULL);
    assert(map_get(m, "42") != NULL);
    assert(map_get(m, "43") != NULL);
    assert(map_get(m, "44") != NULL);
    assert(map_get(m, "45") != NULL);
    assert(map_get(m, "46") != NULL);
    assert(map_get(m, "47") != NULL);
    assert(map_get(m, "48") != NULL);
    assert(map_get(m, "49") != NULL);

    assert(*map_get(m, "00") == 0);
    assert(*map_get(m, "01") == 1);
    assert(*map_get(m, "02") == 2);
    assert(*map_get(m, "03") == 3);
    assert(*map_get(m, "04") == 4);
    assert(*map_get(m, "05") == 5);
    assert(*map_get(m, "06") == 6);
    assert(*map_get(m, "07") == 7);
    assert(*map_get(m, "08") == 8);
    assert(*map_get(m, "09") == 9);
    assert(*map_get(m, "10") == 10);
    assert(*map_get(m, "11") == 11);
    assert(*map_get(m, "12") == 12);
    assert(*map_get(m, "13") == 13);
    assert(*map_get(m, "14") == 14);
    assert(*map_get(m, "15") == 15);
    assert(*map_get(m, "16") == 16);
    assert(*map_get(m, "17") == 17);
    assert(*map_get(m, "18") == 18);
    assert(*map_get(m, "19") == 19);
    assert(*map_get(m, "20") == 20);
    assert(*map_get(m, "21") == 21);
    assert(*map_get(m, "22") == 22);
    assert(*map_get(m, "23") == 23);
    assert(*map_get(m, "24") == 24);
    assert(*map_get(m, "25") == 25);
    assert(*map_get(m, "26") == 26);
    assert(*map_get(m, "27") == 27);
    assert(*map_get(m, "28") == 28);
    assert(*map_get(m, "29") == 29);
    assert(*map_get(m, "30") == 30);
    assert(*map_get(m, "31") == 31);
    assert(*map_get(m, "32") == 32);
    assert(*map_get(m, "33") == 33);
    assert(*map_get(m, "34") == 34);
    assert(*map_get(m, "35") == 35);
    assert(*map_get(m, "36") == 36);
    assert(*map_get(m, "37") == 37);
    assert(*map_get(m, "38") == 38);
    assert(*map_get(m, "39") == 39);
    assert(*map_get(m, "40") == 40);
    assert(*map_get(m, "41") == 41);
    assert(*map_get(m, "42") == 42);
    assert(*map_get(m, "43") == 43);
    assert(*map_get(m, "44") == 44);
    assert(*map_get(m, "45") == 45);
    assert(*map_get(m, "46") == 46);
    assert(*map_get(m, "47") == 47);
    assert(*map_get(m, "48") == 48);
    assert(*map_get(m, "49") == 49);
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
    update_key();
    contains();
    return 0;
}
