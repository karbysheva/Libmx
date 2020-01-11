#include "libmx.h"

int mx_count_words(const char *str, char c) {
    int count = 0;

	if (!str)
		return -1;
    
    while (*str) {
        if (*str != c && *str)
            count++;
        while (*str != c && *str)
            str++;
        while (*str == c && *str) 
            str++;
    }
    return count;
}

