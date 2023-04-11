#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 * _strlen - Entry point
 * Description: Length of string
 * @s: Integer
 * Return: int
 */

int _strlen(char *s)
{
	int longi = 0;

	int len = 0;

	while (*s != '\0')
	{
		longi++;
		len++;
		s++;
	}


	return (longi);
	return (len);
}
