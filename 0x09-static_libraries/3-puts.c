#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 * _puts - Entry point
 * Description: Prints a string to stdout
 * @str: String data type
 * Return: str
 */

void _puts(char *str)
{
	int i;
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	while (str[i] != '\0')
	{
	_putchar(str[i]);
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
