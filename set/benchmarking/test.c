#include "../../lib/test.h"
#include "set.h"

uint32_t set_size(set_t* m);
uint32_t set_capacity(set_t* m);
uint32_t set_max_size(set_t* m);

int set_update_key(set_t* m, char* key);
char** set_get_key(set_t* m, char* key);

int set_remove(set_t* m, char* key);
int set_move_key(set_t* m, char* key, char** dest_key);

uintptr_t set_begin(set_t* m);
uintptr_t set_end(set_t* m);
uintptr_t set_next(set_t* m, uintptr_t iter);
char** set_iter_key(set_t* m, uintptr_t iter);

void size(void)
{
    TEST_START();
    TEST_END();
}

void get_key(void)
{
    TEST_START();
    set_t* s = set_create();
    assert(s); 

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

    assert(set_insert(s, a00) == 0);
    assert(set_insert(s, a01) == 0);
    assert(set_insert(s, a02) == 0);
    assert(set_insert(s, a03) == 0);
    assert(set_insert(s, a04) == 0);
    assert(set_insert(s, a05) == 0);
    assert(set_insert(s, a06) == 0);
    assert(set_insert(s, a07) == 0);
    assert(set_insert(s, a08) == 0);
    assert(set_insert(s, a09) == 0);
    assert(set_insert(s, a10) == 0);
    assert(set_insert(s, a11) == 0);
    assert(set_insert(s, a12) == 0);
    assert(set_insert(s, a13) == 0);
    assert(set_insert(s, a14) == 0);
    assert(set_insert(s, a15) == 0);
    assert(set_insert(s, a16) == 0);
    assert(set_insert(s, a17) == 0);
    assert(set_insert(s, a18) == 0);
    assert(set_insert(s, a19) == 0);
    assert(set_insert(s, a20) == 0);
    assert(set_insert(s, a21) == 0);
    assert(set_insert(s, a22) == 0);
    assert(set_insert(s, a23) == 0);
    assert(set_insert(s, a24) == 0);
    assert(set_insert(s, a25) == 0);
    assert(set_insert(s, a26) == 0);
    assert(set_insert(s, a27) == 0);
    assert(set_insert(s, a28) == 0);
    assert(set_insert(s, a29) == 0);
    assert(set_insert(s, a30) == 0);
    assert(set_insert(s, a31) == 0);
    assert(set_insert(s, a32) == 0);
    assert(set_insert(s, a33) == 0);
    assert(set_insert(s, a34) == 0);
    assert(set_insert(s, a35) == 0);
    assert(set_insert(s, a36) == 0);
    assert(set_insert(s, a37) == 0);
    assert(set_insert(s, a38) == 0);
    assert(set_insert(s, a39) == 0);
    assert(set_insert(s, a40) == 0);
    assert(set_insert(s, a41) == 0);
    assert(set_insert(s, a42) == 0);
    assert(set_insert(s, a43) == 0);
    assert(set_insert(s, a44) == 0);
    assert(set_insert(s, a45) == 0);
    assert(set_insert(s, a46) == 0);
    assert(set_insert(s, a47) == 0);
    assert(set_insert(s, a48) == 0);
    assert(set_insert(s, a49) == 0);

    set_free(s);
    TEST_END();
}

void shrink_to_fit(void)
{
    TEST_START();
    set_t* s = set_create();
    assert(s);

    assert(set_insert(s, "00") == 0);
    assert(set_insert(s, "01") == 0);
    assert(set_insert(s, "02") == 0);
    assert(set_insert(s, "03") == 0);
    assert(set_insert(s, "04") == 0);
    assert(set_insert(s, "05") == 0);
    assert(set_insert(s, "06") == 0);
    assert(set_insert(s, "07") == 0);
    assert(set_insert(s, "08") == 0);
    assert(set_insert(s, "09") == 0);
    assert(set_insert(s, "10") == 0);
    assert(set_insert(s, "11") == 0);
    assert(set_insert(s, "12") == 0);
    assert(set_insert(s, "13") == 0);
    assert(set_insert(s, "14") == 0);
    assert(set_insert(s, "15") == 0);
    assert(set_insert(s, "16") == 0);
    assert(set_insert(s, "17") == 0);
    assert(set_insert(s, "18") == 0);
    assert(set_insert(s, "19") == 0);
    assert(set_insert(s, "20") == 0);
    assert(set_insert(s, "21") == 0);
    assert(set_insert(s, "22") == 0);
    assert(set_insert(s, "23") == 0);
    assert(set_insert(s, "24") == 0);
    assert(set_insert(s, "25") == 0);
    assert(set_insert(s, "26") == 0);
    assert(set_insert(s, "27") == 0);
    assert(set_insert(s, "28") == 0);
    assert(set_insert(s, "29") == 0);
    assert(set_insert(s, "30") == 0);
    assert(set_insert(s, "31") == 0);
    assert(set_insert(s, "32") == 0);
    assert(set_insert(s, "33") == 0);
    assert(set_insert(s, "34") == 0);
    assert(set_insert(s, "35") == 0);
    assert(set_insert(s, "36") == 0);
    assert(set_insert(s, "37") == 0);
    assert(set_insert(s, "38") == 0);
    assert(set_insert(s, "39") == 0);
    assert(set_insert(s, "40") == 0);
    assert(set_insert(s, "41") == 0);
    assert(set_insert(s, "42") == 0);
    assert(set_insert(s, "43") == 0);
    assert(set_insert(s, "44") == 0);
    assert(set_insert(s, "45") == 0);
    assert(set_insert(s, "46") == 0);
    assert(set_insert(s, "47") == 0);
    assert(set_insert(s, "48") == 0);
    assert(set_insert(s, "49") == 0);

    assert(set_shrink_to_fit(s) == 0);
    assert(set_size(s) == 50);
    assert(set_capacity(s) / MAX_LOAD_FACTOR * FIT_LOAD_FACTOR == set_size(s));

    assert(set_contains(s, "00"));
    assert(set_contains(s, "01"));
    assert(set_contains(s, "02"));
    assert(set_contains(s, "03"));
    assert(set_contains(s, "04"));
    assert(set_contains(s, "05"));
    assert(set_contains(s, "06"));
    assert(set_contains(s, "07"));
    assert(set_contains(s, "08"));
    assert(set_contains(s, "09"));
    assert(set_contains(s, "10"));
    assert(set_contains(s, "11"));
    assert(set_contains(s, "12"));
    assert(set_contains(s, "13"));
    assert(set_contains(s, "14"));
    assert(set_contains(s, "15"));
    assert(set_contains(s, "16"));
    assert(set_contains(s, "17"));
    assert(set_contains(s, "18"));
    assert(set_contains(s, "19"));
    assert(set_contains(s, "20"));
    assert(set_contains(s, "21"));
    assert(set_contains(s, "22"));
    assert(set_contains(s, "23"));
    assert(set_contains(s, "24"));
    assert(set_contains(s, "25"));
    assert(set_contains(s, "26"));
    assert(set_contains(s, "27"));
    assert(set_contains(s, "28"));
    assert(set_contains(s, "29"));
    assert(set_contains(s, "30"));
    assert(set_contains(s, "31"));
    assert(set_contains(s, "32"));
    assert(set_contains(s, "33"));
    assert(set_contains(s, "34"));
    assert(set_contains(s, "35"));
    assert(set_contains(s, "36"));
    assert(set_contains(s, "37"));
    assert(set_contains(s, "38"));
    assert(set_contains(s, "39"));
    assert(set_contains(s, "40"));
    assert(set_contains(s, "41"));
    assert(set_contains(s, "42"));
    assert(set_contains(s, "43"));
    assert(set_contains(s, "44"));
    assert(set_contains(s, "45"));
    assert(set_contains(s, "46"));
    assert(set_contains(s, "47"));
    assert(set_contains(s, "48"));
    assert(set_contains(s, "49"));

    set_free(s);
    TEST_END();
}

void reserve(void)
{
    TEST_START();
    set_t* s = set_create();
    assert(s);

    set_reserve(s, 100);
    assert(set_capacity(s) >= 100);

    set_free(s);
    TEST_END();
}

void insert_contains(void)
{
    TEST_START();
    set_t* s = set_create();
    assert(s);

    assert(!set_contains(s, "00"));
    assert(!set_contains(s, "01"));
    assert(!set_contains(s, "02"));
    assert(!set_contains(s, "03"));
    assert(!set_contains(s, "04"));
    assert(!set_contains(s, "05"));
    assert(!set_contains(s, "06"));
    assert(!set_contains(s, "07"));
    assert(!set_contains(s, "08"));
    assert(!set_contains(s, "09"));
    assert(!set_contains(s, "10"));
    assert(!set_contains(s, "11"));
    assert(!set_contains(s, "12"));
    assert(!set_contains(s, "13"));
    assert(!set_contains(s, "14"));
    assert(!set_contains(s, "15"));
    assert(!set_contains(s, "16"));
    assert(!set_contains(s, "17"));
    assert(!set_contains(s, "18"));
    assert(!set_contains(s, "19"));
    assert(!set_contains(s, "20"));
    assert(!set_contains(s, "21"));
    assert(!set_contains(s, "22"));
    assert(!set_contains(s, "23"));
    assert(!set_contains(s, "24"));
    assert(!set_contains(s, "25"));
    assert(!set_contains(s, "26"));
    assert(!set_contains(s, "27"));
    assert(!set_contains(s, "28"));
    assert(!set_contains(s, "29"));
    assert(!set_contains(s, "30"));
    assert(!set_contains(s, "31"));
    assert(!set_contains(s, "32"));
    assert(!set_contains(s, "33"));
    assert(!set_contains(s, "34"));
    assert(!set_contains(s, "35"));
    assert(!set_contains(s, "36"));
    assert(!set_contains(s, "37"));
    assert(!set_contains(s, "38"));
    assert(!set_contains(s, "39"));
    assert(!set_contains(s, "40"));
    assert(!set_contains(s, "41"));
    assert(!set_contains(s, "42"));
    assert(!set_contains(s, "43"));
    assert(!set_contains(s, "44"));
    assert(!set_contains(s, "45"));
    assert(!set_contains(s, "46"));
    assert(!set_contains(s, "47"));
    assert(!set_contains(s, "48"));
    assert(!set_contains(s, "49"));

    assert(set_insert(s, "00") == 0);
    assert(set_insert(s, "01") == 0);
    assert(set_insert(s, "02") == 0);
    assert(set_insert(s, "03") == 0);
    assert(set_insert(s, "04") == 0);
    assert(set_insert(s, "05") == 0);
    assert(set_insert(s, "06") == 0);
    assert(set_insert(s, "07") == 0);
    assert(set_insert(s, "08") == 0);
    assert(set_insert(s, "09") == 0);
    assert(set_insert(s, "10") == 0);
    assert(set_insert(s, "11") == 0);
    assert(set_insert(s, "12") == 0);
    assert(set_insert(s, "13") == 0);
    assert(set_insert(s, "14") == 0);
    assert(set_insert(s, "15") == 0);
    assert(set_insert(s, "16") == 0);
    assert(set_insert(s, "17") == 0);
    assert(set_insert(s, "18") == 0);
    assert(set_insert(s, "19") == 0);
    assert(set_insert(s, "20") == 0);
    assert(set_insert(s, "21") == 0);
    assert(set_insert(s, "22") == 0);
    assert(set_insert(s, "23") == 0);
    assert(set_insert(s, "24") == 0);
    assert(set_insert(s, "25") == 0);
    assert(set_insert(s, "26") == 0);
    assert(set_insert(s, "27") == 0);
    assert(set_insert(s, "28") == 0);
    assert(set_insert(s, "29") == 0);
    assert(set_insert(s, "30") == 0);
    assert(set_insert(s, "31") == 0);
    assert(set_insert(s, "32") == 0);
    assert(set_insert(s, "33") == 0);
    assert(set_insert(s, "34") == 0);
    assert(set_insert(s, "35") == 0);
    assert(set_insert(s, "36") == 0);
    assert(set_insert(s, "37") == 0);
    assert(set_insert(s, "38") == 0);
    assert(set_insert(s, "39") == 0);
    assert(set_insert(s, "40") == 0);
    assert(set_insert(s, "41") == 0);
    assert(set_insert(s, "42") == 0);
    assert(set_insert(s, "43") == 0);
    assert(set_insert(s, "44") == 0);
    assert(set_insert(s, "45") == 0);
    assert(set_insert(s, "46") == 0);
    assert(set_insert(s, "47") == 0);
    assert(set_insert(s, "48") == 0);
    assert(set_insert(s, "49") == 0);

    assert(set_contains(s, "00"));
    assert(set_contains(s, "01"));
    assert(set_contains(s, "02"));
    assert(set_contains(s, "03"));
    assert(set_contains(s, "04"));
    assert(set_contains(s, "05"));
    assert(set_contains(s, "06"));
    assert(set_contains(s, "07"));
    assert(set_contains(s, "08"));
    assert(set_contains(s, "09"));
    assert(set_contains(s, "10"));
    assert(set_contains(s, "11"));
    assert(set_contains(s, "12"));
    assert(set_contains(s, "13"));
    assert(set_contains(s, "14"));
    assert(set_contains(s, "15"));
    assert(set_contains(s, "16"));
    assert(set_contains(s, "17"));
    assert(set_contains(s, "18"));
    assert(set_contains(s, "19"));
    assert(set_contains(s, "20"));
    assert(set_contains(s, "21"));
    assert(set_contains(s, "22"));
    assert(set_contains(s, "23"));
    assert(set_contains(s, "24"));
    assert(set_contains(s, "25"));
    assert(set_contains(s, "26"));
    assert(set_contains(s, "27"));
    assert(set_contains(s, "28"));
    assert(set_contains(s, "29"));
    assert(set_contains(s, "30"));
    assert(set_contains(s, "31"));
    assert(set_contains(s, "32"));
    assert(set_contains(s, "33"));
    assert(set_contains(s, "34"));
    assert(set_contains(s, "35"));
    assert(set_contains(s, "36"));
    assert(set_contains(s, "37"));
    assert(set_contains(s, "38"));
    assert(set_contains(s, "39"));
    assert(set_contains(s, "40"));
    assert(set_contains(s, "41"));
    assert(set_contains(s, "42"));
    assert(set_contains(s, "43"));
    assert(set_contains(s, "44"));
    assert(set_contains(s, "45"));
    assert(set_contains(s, "46"));
    assert(set_contains(s, "47"));
    assert(set_contains(s, "48"));
    assert(set_contains(s, "49"));

    set_free(s);
    TEST_END();
}

void create_free(void)
{

    TEST_START();
    set_t* s = set_create();
    assert(s);
    set_free(s);
    TEST_END();
}

int main(void)
{
    insert_contains();
    create_free();
    reserve();
    shrink_to_fit();
    get_key();
    return 0;
}
