#include "libmx.h"

void mx_str_reverse(char *s) {
	int first = 0;
	int last;

	if (!s) return;

	last = mx_strlen(s) - 1;
	
	while(first < last && s) {
		mx_swap_char(&s[first], &s[last]);
		first++;
		last--;	
	}
}

