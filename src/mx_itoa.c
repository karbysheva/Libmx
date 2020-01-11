#include "libmx.h"

static int mx_number_len(int number) {
	int len = 0;
	while (number) {
		number = number / 10;
		len++;
	}
	return len;
}

char *mx_itoa(int number) {
	int i = 0;
	int sign = 0;
	char *str = mx_strnew(mx_number_len(number));

	if ((sign = number) <= 0)
		number = -number;
	while (number) {
		str[i++] = number % 10 + '0';
		number = number / 10; 
	}
    if (sign < 0)
		str[i++] = '-';
	if (sign == 0)
		str[i++] = '0';
	if (sign == -2147483648)
		return "-2147483648";
	str[i] = '\0';
	mx_str_reverse(str);
	return str;
}

