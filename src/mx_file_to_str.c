#include "libmx.h"

char *mx_file_to_str(const char *file) {
	char buffer;
	char *readfile;
	size_t size = 0;
	int fd = open(file, O_RDONLY);

	if (fd < 0)
		return NULL;
	while (read(fd, &buffer, 1) > 0) {
		size++;
	}
	close(fd);
	fd = open(file, O_RDONLY);
	if (!(readfile = mx_strnew(size)))
		return NULL;

	for (size_t i = 0; read(fd, &buffer, 1) > 0; i++) {
		readfile[i] = buffer;
	}
	close(fd);
	return readfile;
}

