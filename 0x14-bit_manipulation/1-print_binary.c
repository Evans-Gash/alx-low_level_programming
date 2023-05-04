#include <stdio.h>

#include "main.h"

/**
 * print_binary(unsigned long int e) - the binary correspondent of a decimal,
 * digit will be printed
 * @e: the digit to be printed in the binary
 */

void print_binary(unsigned long int e)

{
	int i, total = 0;
	unsigned long int latest;

	for (i = 63; i >= 0; i--)
	{
		latest = e >> i;

		if (latest & 1)
		{
			_putchar('1');
			total++;
		}
		else if (total)
			_putchar('0');
	}
	if (!total)
		_putchar('0');
}
