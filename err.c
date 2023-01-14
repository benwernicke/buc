#include "err.h"

static err_t error = ERR_OK;

err_t err_get(void)
{
    return error;
}

void err_set(err_t e)
{
    error = e;
}
