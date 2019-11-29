#include "libmx.h"

void mx_str_reverse(char *s) {
	int first = 0;
	int last = mx_strlen(s) - 1;

	while(first < last) {
		mx_swap_char(&s[first], &s[last]);
		first++;
		last--;	
	}
}

