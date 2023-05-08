#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - Adds the content at the end of the file
 * @Exorcist: subject of the file
 * @Essence: string to be added last
 *
 * Return: 1(works), -1(doesn't work)
 */

int append_text_to_file(const char *Exorcist, char *Essence)

{
	int j, d, lenght = 0;

	if (Exorcist == NULL)
		return (-1);

	if (Essence != NULL)
	{
		for (lenght = 0; Essence[lenght];)
			lenght++;
	}

	j = open(Exorcist, O_WRONLY | O_APPEND);
	d = write(j, Essence, lenght);

	if (j == -1 || d == -1)
		return (-1);

	close(j);

	return (1);
}
