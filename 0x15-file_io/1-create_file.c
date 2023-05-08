#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_file - Creates a file with a particular name
 * @Exorcist: the created file
 * @Essence: the contents of the created file
 *
 * Return: 1(Success), -1(Unseccessful)
 */

int create_file(const char *Exorcist, char *Essence)

{
	int vv, X, stp = 0;

	if (Exorcist == NULL)
		return (-1);

	if (Essence != NULL)

	{
		for (stp = 0; Essence[stp];)
			stp++;
	}

	vv = open(Exorcist, O_WRONLY | O_CREAT | O_RDWR | O_TRUNC, 369);
	X = write(vv, Essence, stp);

	if (vv == -1 || X == -1)
		return (-1);

	close(vv);

	return (1);
}
