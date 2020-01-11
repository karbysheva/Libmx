#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
	int count = mx_count_substr(str, sub);
	char *new;
	char *temp;

	if (!str || !sub || !replace)
		return NULL;
	new = mx_strnew(mx_strlen(str) - mx_strlen(sub)
	* count + mx_strlen(replace) * count);
	temp = new;

	while (*str) {
		if (mx_strncmp(str, sub, mx_strlen(sub)) == 0) {
			mx_strncpy(new, replace, mx_strlen(replace));
			new += mx_strlen(replace);
			str += mx_strlen(sub);
		} else {
			*new++ = *str++;
		}
	}
	return temp;
}
