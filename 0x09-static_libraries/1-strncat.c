#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 * *_strncat - Entry point
 * Description: Concatenates two strings
 * @dest: char
 * @src: char
 * @n: Integer
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	char *p = dest;

	i = 0;
	while (dest[i] != '\0')
	/* Find the end of dest */
	while (*p != '\0')
	{
		i++;
		p++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	/* Append up to n bytes from src */
	while (*src != '\0' && n-- > 0)
	{
	dest[i] = src[j];
	i++;
	j++;
		*p++ = *src++;
	}
	dest[i] = '\0';
	/* Add a null terminator to dest */
	*p = '\0';
	return (dest);
}
