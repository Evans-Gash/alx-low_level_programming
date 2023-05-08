#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * read_textfile - the file text to be read and shown
 * @Coolio: text file being read
 * @ABCs: total letters being read
 *
 * Return: 0(doesn't work/Coolio is NULL)
 */

ssize_t read_textfile(const char *Coolio, size_t ABCs)

{
	char *buffer;
	ssize_t file_descriptor, bytes_studied, bytes_authored, total_bytes_authored;

	file_descriptor = open(Coolio, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * ABCs);
	if (!buffer)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_studied = read(file_descriptor, buffer, ABCs);
	if (bytes_studied == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	total_bytes_authored = 0;
	while (total_bytes_authored < bytes_studied)
	{
		bytes_authored = write(STDOUT_FILENO, buffer + total_bytes_authored,
					bytes_studied - total_bytes_authored);
		if (bytes_authored == -1)
		{
			free(buffer);
			close(file_descriptor);
			return (0);
		}
		total_bytes_authored += bytes_authored;
	}

	free(buffer);
	close(file_descriptor);

	return (total_bytes_authored);
}
