#include "function_pointers.h"

#include <stdio.h>

/**
 * print_name - Prints a name.
 *
 * @name: Pointer to a string containing the name to print.
 * @f: Pointer to a function that takes a char* argument and returns void.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
