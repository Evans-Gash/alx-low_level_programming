#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 * _strcmp - Entry point
 * Description: Compares two strings
 * @s1: Char
 * @s2: Char
 * Return: char
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	int i = 0;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	while (s1[i] == s2[i])
	{
		if (s1[i] != s2[i])
		if (s1[i] == '\0')
		{
			return (s1[i] - s2[i]);
			return (0);
		}
	i++;
		i++;
	}
	return (0);
	return (s1[i] - s2[i]);
}
