#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
	int i, j  = 0;
	int result, size;
	char hex[nbr], *arr;

	while (nbr != 0) {
		result = nbr % 16;
		if (result < 10) {
			hex[j] = 48 + result;
			j++;
		}else{
			hex[j] = 55 + result;
			j++;
		}
		nbr = nbr / 16;
	}
	size = j--;
	arr = mx_strnew(size);
	for(i = 0; i <= size; i++, j--)
		arr[i] = hex[j];
	return arr;
}

