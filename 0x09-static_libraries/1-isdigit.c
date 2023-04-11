#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 * _isdigit - Entry point
 * Description: Checks for a digit between 0 & 9
 * @c: Integer
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
