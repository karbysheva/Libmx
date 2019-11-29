#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
	int len_str = 0;
	int len_sub = 0;
	int len_replace = 0;
	int counter = mx_count_substr(str, sub);
	char *newstr = mx_strnew(len_str - len_sub * counter + len_replace * counter);
	char *temp = newstr;

	if (!str || !sub || !replace )
		return NULL;

	len_str = mx_strlen(str);
	len_sub = mx_strlen(sub);
	len_replace = mx_strlen(replace);

	while (*str) {
		if (mx_strncmp(str, sub, len_sub) == 0) {
			mx_strncpy(newstr, replace, len_replace);
			newstr += len_replace;
			str += len_sub;
		}else{
			*newstr = *str;
			str++;
			newstr++;
		}	
	}
	return temp;
}

