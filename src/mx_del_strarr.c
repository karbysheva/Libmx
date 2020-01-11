#include "libmx.h"

void mx_del_strarr(char ***arr) {
	char **new = *arr;

	while (*new) {
		mx_strdel(new);
		new++;
	}
	free(*arr);
	*arr = NULL;
}

