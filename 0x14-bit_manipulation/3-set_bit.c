#include <stdio.h>
#include "main.h"

/**
 * set_bit(unsigned long int *n, unsigned int index)- will place the bit,
 * at a particular index to 1
 * @x: pointer to digit to place the bit at
 * @index: index of the bit to set to 1
 *
 * Return: 1(works), -1(doesn't work)
 */

int set_bit(unsigned long int *x, unsigned int index)
{
	if (index > 63)
		return (-1);

	*x = ((1UL << index) | *x);
	return (1);
}
