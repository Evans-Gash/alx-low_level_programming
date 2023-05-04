#include <stdio.h>
#include "main.h"

/**
 * get_bit(unsigned long int e, unsigned int index) - will return the worth,
 * of a bit at a particular index
 * @e: digit to locate the bit
 * @index: the index of the bit to locate
 *
 * Return: the worth of the bit at index
 */

int get_bit(unsigned long int e, unsigned int index)

{
	unsigned long int mantle = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)

		return (-1);

	return ((e & mantle) != 0);

}
