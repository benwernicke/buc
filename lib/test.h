#ifndef TEST_H
#define TEST_H

#include <assert.h>
#include <stdio.h>

#define TEST_START()                                                           \
    do {                                                                       \
        fprintf(stdout, "[test] %s:\n", __func__);                             \
    } while (0)

#define TEST_END()                                                             \
    do {                                                                       \
        fprintf(stdout, "\tok\n");                                             \
    } while (0)

#endif
