#include "libmx.h"

char *mx_strdup(const char *str) {
    char *ar = mx_strnew(mx_strlen(str) + 1);
    if (ar == NULL)
		return NULL;
    mx_strcpy(ar, str);
    	return ar;
}

