#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *ar = mx_strnew(mx_strlen(s1));
    if (ar == NULL)
        return NULL;
    mx_strncpy(ar, s1, n);
        return ar;
}

