#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * read_textfile - the file text to be read and shown
 * @filename: text file being read
 * @letters: total letters being read
 *
 * Return: 0(doesn't work/file name is NULL)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor, bytes_read, bytes_written, total_bytes_written;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	total_bytes_written = 0;
	while (total_bytes_written < bytes_read)
	{
		bytes_written = write(STDOUT_FILENO, buffer + total_bytes_written,
					bytes_read - total_bytes_written);
		if (bytes_written == -1)
		{
			free(buffer);
			close(file_descriptor);
			return (0);
		}
		total_bytes_written += bytes_written;
	}

	free(buffer);
	close(file_descriptor);

	return (total_bytes_written);
}
