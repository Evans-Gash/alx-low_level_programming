#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 * Description: Searches a string for any of a set of bytes
 * @s: Character
 * @accept: Character
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int k;


	while (*s)
	while (*s != '\0')
	{
		for (k = 0; accept[k]; k++)
		char *a = accept;

		while (*a != '\0')
		{
		if (*s == accept[k])
		return (s);
			if (*a == *s)
			{
				return (s);
			}
			a++;
		}
	s++;
		s++;
	}


return ('\0');
	return ('\0');
}
