#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 * Description: Gets the length of a prefix substring
 * @s: Character
 * @accept: Character
 * Return: char
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	unsigned int len = 0;
	int i, j;

	while (*s)
	for (i = 0; s[i] != '\0'; i++)
	{
		for (r = 0; accept[r]; r++)
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[r])
			if (s[i] == accept[j])
			{
				n++;
				len++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
		if (accept[j] == '\0')
		{
			return (len);
		}
	}
	return (n);
	return (len);
}
