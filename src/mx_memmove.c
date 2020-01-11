#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
	unsigned char *ds = (unsigned char*)dst;
	unsigned char *sr = (unsigned char*)src;

	if (ds <= sr || ds >= (sr + len)) {
		while (len--) {
			*ds++ = *sr++;
		}
	} else {
		ds += len - 1;
		sr += len - 1;
		while (len--)
			*ds-- = *sr--;
	}
	return dst;
}

