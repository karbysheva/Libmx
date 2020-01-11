#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
	unsigned char *tempdst = (unsigned char*)dst;
	unsigned char *tempsrc = (unsigned char*)src;
	size_t i = 0;

	while (i < n) {
		tempdst[i] = tempsrc[i];
		i++;
		if (tempsrc[i] == c) {
			tempdst[i] = tempsrc[i];
			return &tempdst[i + 1];
		}
	}
	return NULL;
}

