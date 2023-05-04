#include <stdio.h>
#include "main.h"

/**
 * flip_bits - will compute the charters of bits to transpose
 * to locate from one digit to another
 * @x: opening digit
 * @z: secondary digit
 *
 * Return: 1(Sucessful), -1(Fails)
 */
unsigned int flip_bits(unsigned long int x, unsigned long int z)
{
	int i, total = 0;
	unsigned long int initial;
	unsigned long int dedicated = x ^ z;

	for (i = 63; i >= 0; i--)
	{
		initial = dedicated >> i;
		if (initial & 1)
			total++;
	}

	return (total);
}
