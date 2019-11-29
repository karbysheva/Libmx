#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
    char *new = mx_strnew(mx_strlen(str));
    char *result = new;
    int i = 0;
    int j = 0;

    if (!str)
        return NULL;
    while (str[i]) {
        while (mx_isspace(str[i]) && mx_isspace(str[i + 1])) {
            i++;
        }
        if (mx_isspace(str[i])) {
            new[j++] = ' ';
            i++;
        }else{
            new[j++] = str[i++];
        }
    }
    free(new);
    return mx_strtrim(result);
}

