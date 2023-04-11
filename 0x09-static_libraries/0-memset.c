#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 * *_memset - Entry point
 * Description: Fills memory with a constant byte
 * @s: Character
 * @b: Character
 * @n: Integer
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	char *p = s;

	for (; n > 0; i++)
	while (n-- > 0)
	{
		s[i] = b;
		n--;
		*p++ = b;
	}
	return (s);
}
