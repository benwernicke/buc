#include "lib/beaver.h"

#define FAST_FLAGS "-pipe -O3 -march=native -mtune=native -flto"

#define FLAGS                                                                  \
    "-g -Wall -Og -pedantic -fsanitize=address "                               \
    "-fsanitize=leak -fsanitize=undefined"

/*#define FLAGS "-g -Wall -Og -pedantic"*/

#define VAL_FLAGS "-g -Wall -Og -pedantic "

module_t modules[] = {
    { .name = "cw_base", .src = "bench/cw.c" },
    { .name = "cw_base", .src = "lib/util.c" },

    { .name = "test_base", .src = "test.c" },
    { .name = "test_base", .src = "lib/util.c" },

    { .name = "map_a", .src = "maps/map_a.c" },
    { .name = "map_b", .src = "maps/map_b.c" },
};

uint32_t modules_len = sizeof(modules) / sizeof(*modules);

char* cw_a[] = { "map_a", "cw_base", NULL };
char* cw_b[] = { "map_b", "cw_base", NULL };

#define BENCH_CW                                                               \
    "hyperfine -N "                                                            \
    "'./target/bench/cw/a bench/lorem' "                                       \
    "'./target/bench/cw/b bench/lorem' "                                       \

#define TEST(m)                                                                \
    do {                                                                       \
        char* t[] = { m, "test_base", NULL };                                  \
        compile(t, FLAGS);                                                     \
        call_or_panic("./out");                                                \
        rm("out");                                                             \
    } while (0)

#define CW_DEBUG(m)                                                            \
    do {                                                                       \
        compile(m, VAL_FLAGS);                                                 \
        call_or_panic("./out bench/lorem");                                    \
    } while (0)

void test(char* m)
{
    prepare_all(FLAGS);
    if (!m) {
        TEST("map_a");
        TEST("map_b");
    } else if (strcmp(m, "a") == 0) {
        TEST("map_a");
    } else if (strcmp(m, "b") == 0) {
        TEST("map_b");
    }
}

void cw_debug(char* m)
{
    if (!m) {
        CW_DEBUG(cw_a);
        CW_DEBUG(cw_b);
    } else if (strcmp(m, "a") == 0) {
        CW_DEBUG(cw_a);
    } else if (strcmp(m, "b") == 0) {
        CW_DEBUG(cw_b);
    }
}

#define COMP_TO(p, t, f)                                                       \
    do {                                                                       \
        compile(p, f);                                                         \
        call_or_panic("mv out " t);                                            \
    } while (0)

void bench(char* t)
{
    prepare_all(FAST_FLAGS);

    if (strcmp(t, "cw") == 0) {
        COMP_TO(cw_a, "target/bench/cw/a", FAST_FLAGS);
        COMP_TO(cw_b, "target/bench/cw/b", FAST_FLAGS);
        call_or_panic(BENCH_CW);
    }
}

int main(int argc, char** argv)
{
    auto_update(argv);

    if (argc == 1) {
        test(NULL);
    } else if (strcmp(argv[1], "recompile") == 0) {
        recompile();
    } else if (strcmp(argv[1], "test") == 0) {
        test(argv[2]);
    } else if (strcmp(argv[1], "clean") == 0) {
        rm("$(find build/ -type f)");
        rm("out");
    } else if (strcmp(argv[1], "cw-debug") == 0) {
        cw_debug(argv[2]);
    } else if (strcmp(argv[1], "bench") == 0) {
        bench(argv[2]);
    }
    return 0;
}
