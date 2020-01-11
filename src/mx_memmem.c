#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    char *bi = (char*)big;
    char *li = (char*)little;
    size_t len_l = mx_strlen(little);

    if (big_len < little_len || len_l != little_len) {
        return NULL;
    }
    while (big_len) {
        bi++;
        if (mx_strncmp(bi, li, little_len) == 0) {
            return bi;
        }
    }
    return NULL;
}

