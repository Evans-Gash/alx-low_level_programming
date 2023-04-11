#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 * *_strncpy - Entry point
 * Description: Copies a string
 * @dest: char
 * @src: char
 * @n: Integer
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	int i;

	j = 0;
	while (j < n && src[j] != '\0')
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j] = src[j];
		j++;
		dest[i] = src[i];
	}
	while (j < n)
	for (; i < n; i++)
	{
		dest[j] = '\0';
		j++;
		dest[i] = '\0';
	}


	return (dest);
}
