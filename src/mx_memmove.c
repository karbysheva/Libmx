#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
	unsigned char *tempdst = (unsigned char*)dst;
	unsigned char *tempsrc = (unsigned char*)src;

	if (tempdst <= tempsrc || tempdst >= (tempsrc + len)) {
		while (len--) {
			*tempdst++ = *tempsrc++;
		}
	}else{
		tempdst += len - 1;
		tempsrc += len - 1;
		while (len--)
			*tempdst-- = *tempsrc--;
	}
	return dst;
}

