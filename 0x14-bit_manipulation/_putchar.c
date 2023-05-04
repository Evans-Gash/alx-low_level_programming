#include <unistd.h>
#include "main.h"

/**
 * _putchar - will type symbol c to stdout
 * @c: this is the symbol to be printed
 *
 * Return: 1 (Sucess)
 * -1(Fails) is returned, and errno is done.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
