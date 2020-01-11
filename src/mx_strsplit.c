#include "libmx.h"

static int mx_str_len(const char *s, char c) {
	int i = 0;
	int len = 0;

	while (s[i] == c)
		i++;
	while(s[i] != c) {
		i++;
		len++;
	}
	return len;
}

char **mx_strsplit(const char *s, char c) {
	size_t i = 0;
	int j = 0;
	int a;
	size_t size_s = mx_count_words(s, c);
	char **result = (char **)malloc((size_s + 1) * sizeof(char *));

	if (!s)
		return NULL;
	while (i < size_s) {
		a = 0;	
		result[i] = mx_strnew(mx_str_len(&s[j], c));
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			result[i][a++] = s[j++];
		result[i][a] = '\0';
		i++;
	}
	result[i] = NULL;
	return result;
}

