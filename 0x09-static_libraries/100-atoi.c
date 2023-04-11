#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 * _atoi - Entry point
 * Description: Convert String to Integer
 * @s: Integer
 * Return: char
 */

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;
	int sign = 1;
	unsigned int ans = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
	if (s[i] == '-')
		sign *= -1;
		i++;
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	while (*s >= '0' && *s <= '9')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
		ans = ans * 10 + (*s - '0');
		s++;
	}
	res *= sign;
	return (res);
	return (sign * ans);
}
