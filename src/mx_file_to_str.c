#include "libmx.h"

char *mx_file_to_str(const char *file) {
	char buf;
	char *readfile = NULL;
	size_t size = 0;
	int fd = open(file, O_RDONLY);

	if (fd < 0)
		return NULL;
	while (read(fd, &buf, 1) > 0)
		size++;
	close(fd);
	if (size > 0) {
		fd = open(file, O_RDONLY);
		readfile = mx_strnew(size);
		for (size_t i = 0; read(fd, &buf, 1) > 0; i++) {
			readfile[i] = buf;
		}
		close(fd);
	}
	return readfile;
}

