#include <stdio.h>
#include "main.h"

/**
 * get_endianness - will access if a machine is large or small edian
 * Return: 0(large), 1(small)
 */

int get_endianness(void)

{
	unsigned int w = 1;
	char *k = (char *) &w;

	return (*k);
}
