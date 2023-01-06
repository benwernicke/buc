#ifndef UTIL_H
#define UTIL_H

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

uint32_t fnv_hash(char* s);
bool is_eq_str(char* a, char* b);

char* read_file(char* path);
void first_word(char* s, char** start, char** end);

#define PANIC(...)                                                             \
    do {                                                                       \
        fprintf(stderr, "Error: ");                                            \
        fprintf(stderr, __VA_ARGS__);                                          \
        fprintf(stderr, "\n");                                                 \
        exit(1);                                                               \
    } while (0)

#define PANIC_IF(b, ...)                                                       \
    do {                                                                       \
        if (b)                                                                 \
            PANIC(__VA_ARGS__);                                                \
    } while (0)

#endif
