#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
	int j = 0;
	int result;
	int size;
	char hex[nbr];
	char *arr;

	while (nbr != 0) {
		result = nbr % 16;
		if (result < 10)
			hex[j] = 48 + result;
		else
			hex[j] = 87 + result;
		j++;
		nbr = nbr / 16;
	}
	size = j--;
	arr = mx_strnew(size);
	for (int i = 0; i <= size; i++, j--)
		arr[i] = hex[j];
	return arr;
}

