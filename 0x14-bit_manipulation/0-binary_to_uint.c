#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - binary number is converted to unsigned int
 * @b: A pointer to a string that holds the binary digits 0 and 1
 *
 * Return: will return the converted digit/number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int outcome = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		outcome = outcome << 1;
		if (*b == '1')
			outcome = outcome | 1;
	}

	return (outcome);
}
