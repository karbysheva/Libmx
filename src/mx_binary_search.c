#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
	int left = 0;
	int right = size - 1;
	int middle;
	(*count) = 0;

	while (left <= right) {
		(*count)++;
		middle = (left + right) / 2;
		if (mx_strcmp(arr[middle], s) == 0) {
			return middle;
		}
		else if (mx_strcmp(arr[middle], s) > 0) {
			right = middle - 1;
		} else {
			left = middle + 1;
		}
	}
	*count = 0;
	return 	-1;
}

