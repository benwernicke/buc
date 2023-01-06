#include <stdint.h>
#include <stdio.h>

#include "../lib/util.h"
#include "../maps/map.h"

int main(int argc, char** argv)
{
    PANIC_IF(argc != 2, "wrong number of arguments");
    char* content = read_file(argv[1]);
    map_t* m = map_create();

    char* s;
    char* e;
    first_word(content, &s, &e);
    for (; s; first_word(++e, &s, &e)) {
        *e = 0;
        uint32_t* v = map_get(m, s);
        if (!v) {
            map_insert(m, s, 1);
        } else {
            *v += 1;
        }
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
