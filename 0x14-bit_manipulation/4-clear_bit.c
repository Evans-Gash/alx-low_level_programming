#include <stdio.h>
#include "main.h"

/**
 * clear_bit - will set the utility,
 * of a particular bit to 0
 * @y: A pointer to the digit to replace
 * @index: index of the bit to free
 *
 * Return: 1(works), -1(Doesn't work)
 */

int clear_bit(unsigned long int *y, unsigned int index)
{
	if (index > 63)
		return (-1);

	*y = (~(1UL << index) & *y);
	return (1);
}
