#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
	unsigned char *tempdst = (unsigned char*)dst;
	const char *tempsrc = (char*)src;
	
	for (size_t i = 0; i < n; i++) {
		*tempdst++ = *tempsrc++;
	}
	return dst;
}

