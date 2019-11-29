#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
	if (str == NULL || sub == NULL)
		return -1;

	int count = 0;
    int len = mx_strlen(sub);
    
    while (*str) {
        if (mx_strncmp(str, sub, len) == 0){
            count++;
        }
    	str++;
    }
    return count;
}

