#include "libmx.h"

char *mx_strtrim(const char *str) {
	if (str == NULL)
		return NULL;

	int len  = mx_strlen(str);
	while (mx_isspace(str[len -1]))
		--len;
	while (*str && mx_isspace(*str))
		++str, --len;
	return mx_strndup(str, len);
}

