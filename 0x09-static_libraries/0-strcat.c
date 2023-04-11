#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: the string @src is added to
 * @src: the string to be appended
 *
 * Return: pointer to the resulting string @dest
 * *_strcat - Entry point
 * Description: Concatenates two strings
 * @dest: Character
 * @src: Character
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int len1; /* string length for src */
	int len2; /* string length for dest */
	int i;

	len1 = 0;
	len2 = 0;

	while (src[len1] != '\0')
		len1++;
	char *p = dest;

	while (dest[len2] != '\0')
		len2++;

	for (i = 0; i <= len1; i++)
	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		dest[len2] = src[i];
	len2++;
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
