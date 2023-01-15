#ifndef ERR_H
#define ERR_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

typedef enum {
    ERR_OK,
} err_t;

#define ERR_MSG_(...)                   \
    do {                                \
        fprintf(stderr, "Error: ");     \
        fprintf(stderr, __VA_ARGS__);   \
        putc('\n', stderr);             \
    } while (0)

#define ERR(e) do { set_err(e); goto error; } while (0)
#define ERR_T(e, t) do { set_err(e); goto t; } while (0)

#define ERR_MSG(e, ...) do { ERR_MSG_(__VA_ARGS__); set_err(e); goto error; } while (0)
#define ERR_MSG_T(e, t, ...) do { ERR_MSG_(__VA_ARGS__); set_err(e); goto t; } while (0)

#define ERR_IF(b, e)    \
    do {                \
        if (b) {        \
            ERR(e);     \
        }               \
    } while (0)         \

#define ERR_IF_MSG(b, e, ...)       \
    do {                            \
        if (b) {                    \
            ERR_MSG_(__VA_ARGS__);  \
            ERR(e);                 \
        }                           \
    } while (0)

#define ERR_IF_MSG_T(b, e, t, ...)  \
    do {                            \
        if (b) {                    \
            ERR_MSG_(__VA_ARGS__);  \
            ERR_T(e, t);            \
        }                           \
    } while (0)

#define ERR_FORWARD()               \
    do {                            \
        if (err_get() != ERR_OK) {  \
            goto error;             \
        }                           \
    } while (0)                     \

#define ERR_FORWARD_MSG(...)        \
    do {                            \
        if (err_get() != ERR_OK) {  \
            ERR_MSG_(__VA_ARGS__);  \
            goto error;             \
        }                           \
    } while (0)                     \

#define ERR_FORWARD_MSG_T(t, ...)   \
    do {                            \
        if (err_get() != ERR_OK) {  \
            ERR_MSG_(__VA_ARGS__);  \
            goto t;                 \
        }                           \
    } while (0)                     \

void  err_set(err_t e);
err_t err_get(void);
void  err_format(void);

#endif
