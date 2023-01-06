#include "lib/beaver.h"

#define FLAGS "-g -Wall -Werror -Og"

module_t modules[] = {
    { .name = "map_cstr", .src = "map/test/cstr/test.c" },
    { .name = "map_cstr", .src = "map/test/cstr/map.c" },

    { .name = "map_uint64_t", .src = "map/test/uint64_t/test.c" },
    { .name = "map_uint64_t", .src = "map/test/uint64_t/map.c" },
};

uint32_t modules_len = sizeof(modules) / sizeof(*modules);

char* program[] = { "main", NULL };

#define TEST(t)                                                                \
    do {                                                                       \
        char* p_[] = { t, NULL };                                              \
        compile(p_, FLAGS);                                                    \
        call_or_panic("./out");                                                \
        rm("out");                                                             \
    } while(0)

void test(void) {
    prepare_all(FLAGS);
    TEST("map_cstr");
    TEST("map_uint64_t");
}

int main(int argc, char** argv)
{
    auto_update(argv);
    if (argc == 1) {
        test();
    } else if (strcmp(argv[1], "clean") == 0) {
        rm("$(find build -type f)");
        rm("out");
    } else {
        fprintf(
            stderr, "\033[31mError:\033[39m unknown option: '%s'\n", argv[1]);
        exit(1);
    }
    return 0;
}
