#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n)
{
    char *dup = NULL;
    size_t size = mx_strlen(s1);
    if(n < size) size = n;

    dup = mx_strnew(size);
    mx_strncpy(dup, s1, size);
    return dup;
}

