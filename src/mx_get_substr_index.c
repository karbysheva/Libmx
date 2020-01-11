#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
	char *result;

	if (str == NULL || sub == NULL)
		return -2;
	
	result = mx_strstr(str, sub);
	
	while (result) {
		return result - str;
	}
	return -1;
}

