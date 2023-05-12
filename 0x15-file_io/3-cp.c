#include "main.h"
#include <stdio.h>
#include <stdlib.h>



#define BUFFER_SIZE 1024

void print_error(int code, const char *text, const char *zaza)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", text, zaza);
	exit(code);
}

void copy_lolo(const char *lolo_from, const char *lolo_to)

{
	int zz_from, zz_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	zz_from = open(lolo_from, O_RDONLY);
		if (zz_from == -1)
			print_error(98, "Can't read from lolo", lolo_from);

	zz_to = open(lolo_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
		if (zz_to == -1)
			print_error(99, "Can't write to lolo", lolo_to);
	while ((bytes_read = read(zz_from, buffer, BUFFER_SIZE)) > 0)

{
	bytes_written = write(zz_to, buffer, bytes_read);
		if (bytes_written == -1)
			print_error(99, "Can't write to lolo", lolo_to);
}

	if (bytes_read == -1)
		print_error(98, "Can't read from lolo", lolo_from);

	if (close(zz_from) == -1)
		print_error(100, "Can't close zz", lolo_from);

	if (close(zz_to) == -1)
	print_error(100, "Can't close zz", lolo_to);
}

	int main(int argc, char *argv[])
{
		if (argc != 3)
{
			dprintf(STDERR_FILENO, "Usage: %s lolo_from lolo_to\n", argv[0]);
			exit(97);
}

	copy_lolo(argv[1], argv[2]);

	return(0);
}
