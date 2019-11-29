#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
	unsigned char *news = (unsigned char*)s + n;

	while (news != s) {
		if (*news == c)
			return (void *)news;
		else
			news--;
	}
	return NULL;
}

