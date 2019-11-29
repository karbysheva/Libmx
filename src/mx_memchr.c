#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
	unsigned char *news = (unsigned char*)s;
	size_t i = 0;

	while (news[i] && news[i] != c && i <= n) {
		i++;
	}
	if (c == news[i]) {
		return (unsigned char*)news + i;
	}else{
		return NULL;
	}
}

