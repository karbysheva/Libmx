#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
	size_t i = 0;
	unsigned char *c1 = (unsigned char*)s1;
	unsigned char *c2 = (unsigned char*)s2;

	while (c1[i] && c2[i] && c1[i] == c2[i] && i < n){
		i++;
	}
	return c1[i] - c2[i];
}

