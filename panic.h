#ifndef PANIC_H
#define PANIC_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#defien PANIC_PREFIX "Panic: "

#define PANIC(...)                      \
    do {                                \
        fprintf(stderr, PANIC_PREFIX);  \
        fprintf(stderr, __VA_ARGS__);   \
        fprintf(stderr, "\n");          \
        exit(1);                        \
    } while(0)

#define PANIC_IF(b, ...)        \
    do {                        \
        if (b) {                \
            PANIC(__VA_ARGS__); \
        }                       \
    } while (0)

#endif
