#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 * @c: character to be checked
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}