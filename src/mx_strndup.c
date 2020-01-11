#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) { 
   char *ar = mx_strnew(mx_strlen(s1));

    mx_memcpy(ar, s1, n);
    return ar;
}

