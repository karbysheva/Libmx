#include "libmx.h"

char *mx_strtrim(const char *str) {
	int len;

	if (str == NULL)
		return NULL;
	
	len = mx_strlen(str);

	while (mx_isspace(str[len - 1]))
		--len;
	while (*str && mx_isspace(*str))
		++str, --len;
	return mx_strndup(str, len);
}

