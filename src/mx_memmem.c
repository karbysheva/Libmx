#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    unsigned char *huge = (unsigned char*)big;
    unsigned char *small = (unsigned char*)little;

    if (big_len < little_len)
        return NULL;

    while (big_len >= little_len) {
        huge++;
        big_len--;
        if (mx_memcmp(huge, small, little_len) != 0)
            return huge + 1;
    }
    return NULL;
}

