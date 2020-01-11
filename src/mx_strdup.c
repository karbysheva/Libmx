#include "libmx.h"

char *mx_strdup(const char *s1) {
    char *ar = mx_strnew(mx_strlen(s1));

    if (ar == NULL)
        return NULL;

    mx_strcpy(ar, s1);
        return ar;
}

