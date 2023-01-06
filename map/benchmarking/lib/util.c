#include "util.h"

uint32_t fnv_hash(char* s)
{
    uintptr_t h = 2166136261;
    for (; *s; s++) {
        h *= 16777619;
        h ^= *s;
    }
    return h;
}

bool is_eq_str(char* a, char* b) { return strcmp(a, b) == 0; }

char* read_file(char* path)
{
    FILE* fh = fopen(path, "r");
    PANIC_IF(!fh, "could not open file");
    fseek(fh, 0, SEEK_END);
    uint64_t len = ftell(fh);
    rewind(fh);
    char* c = malloc(len + 1);
    fread(c, 1, len, fh);
    c[len] = 0;
    fclose(fh);
    return c;
}

void first_word(char* s, char** start, char** end)
{
    for (; isspace(*s); ++s) { }
    if (!*s) {
        *start = NULL;
        return;
    }
    *start = s;
    for (; *s && !isspace(*s); ++s) { }
    *end = s;
}
