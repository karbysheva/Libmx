#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long degree = 1;
    unsigned long nbr = 0;
    
    if (!hex)
        return 0;
    for (int i = mx_strlen(hex); i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            nbr += (hex[i] - 48) * degree;
            degree *= 16;
        }
        if (hex[i] >= 'a' && hex[i] <= 'f') {
             nbr += (hex[i] - 87) * degree;
            degree *= 16;
        }
        if (hex[i] >= 'A' && hex[i] <= 'F') {
             nbr += (hex[i] - 55) * degree;
            degree *= 16;
        }
    }
    return nbr;
}

