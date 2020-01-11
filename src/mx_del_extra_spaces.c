#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
    char *temp = mx_strnew(mx_strlen(str));
    char *result;
    int j = 0;

    if (!str)
        return NULL;

    for (int i = 0; str[i]; i++) {
        if (!(mx_isspace(str[i]))) {
            temp[j++] = str[i];
        }
        if (!(mx_isspace(str[i])) && mx_isspace(str[i + 1])) {
            temp[j++] = ' ';
        }
    }
    result = mx_strtrim(temp);
    free(temp);
    return result;
}

