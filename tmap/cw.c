#include <stdint.h>
#include <stdio.h>
#include "map.h"
#include <assert.h>
#include <ctype.h>

char* read_file(char* path)
{
    FILE* f = fopen(path, "r");
    assert(f);
    fseek(f, 0, SEEK_END);
    uint64_t l = ftell(f);
    rewind(f);
    char* s = malloc(l + 1);
    s[l] = 0;
    fread(s, 1, l, f);
    fclose(f);
    return s;
}

static void first_word(char* s, char** start, char** end)
{
    for (; isspace(*s); ++s) {  }
    if (!*s) {
        *start = NULL;
        return;
    }
    *start = s;
    for (; *s && !isspace(*s); ++s) {  }
    *end = s;
}

int main(int argc, char** argv)
{
    assert(argc == 2);
    char* content = read_file(argv[1]);
    map_t* m = map_create();

    char* s;
    char* e;
    uint32_t i = 0;
    first_word(content, &s, &e);
    for (; s; ++i, first_word(e, &s, &e)) {
        if (*e) *e++ = 0;
        uint32_t* v = map_get_or_insert(m, s, 0);
        if (!v) { printf("%d: %s\n",i, s); exit(1); }
        *v += 1;
    }

    uintptr_t iter = map_begin(m);
    for (; iter != map_end(m); iter = map_next(m, iter)) {
        char* k = *map_iter_key(m, iter);
        uint32_t v = *map_iter_value(m, iter);
        printf("%s:\t\t%u\n", k, v);
    }

    map_free(m);

    free(content);
    return 0;
}
