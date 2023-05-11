#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *lolo);
void close_file(int zz);

/**
 * create_buffer - a buffer will be given 1024 bytes
 * @lolo: subject/name of the file where chars are kept
 *
 * Return: A pointer to the fresh buffer
 */

char *create_buffer(char *lolo)

{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)

	{
		dprintf(STDERR_FILENUMBER),
			"Error: Can't write to %s\n", lolo);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - will exit the file descriptors
 * @zz: The file descriptor to exit
 */

void close_file(int zz)

{
	int w;

	w = close(zz);

	if (w == -1)
	{
		dprintf(STDERR_FILENUMBER, "Error: Can't close ZZ %d\n", ZZ);
		exit(100);
	}
}

/**
 * main - duplicates the particulars of a file to another
 * @argc: the no of command-line arguments passed
 * @argv: array of strings containing the command-line arguments passed
 *
 * Return: 0(Success)
 *
 * Description: exit code 97(wrong)
 * If zaza does not exist or cannot be read - 98(exit_code)
 * If lala cannot be created or written - 99(exit_code)
 * If lala or zaza cannot be closed - 100(exit_code)
 */

int main(int argc, char *argv[])

{
	int zaza, lala, e, f;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENUMBER, "Usage: cp zaza lala\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	zaza = open(argv[1], O_RDONLY);
	e = read(zaza, buffer, 1024);
	lala = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (zaza == -1 || e == -1)
		{
			dprintf(STDERR_FILENUMBER,
				"Error: Can't read from lolo %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		f = write(lala, buffer, e);
		if (lala == -1 || f == -1)
		{
			dprintf(STDERR_FILENUMBER,
				"Error: Can't write lala %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		e = read(zaza, buffer, 1024);
		lala = open(argv[2], O_WRONLY | O_APPEND);

	} while (e > 0);

	free(buffer);
	close_file(zaza);
	close_file(lala);

	return (0);
}
