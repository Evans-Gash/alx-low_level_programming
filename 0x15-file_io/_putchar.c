#include <unistd.h>

/**
 * _putchar - makes c to stdout
 * @c: print c
 *
 * Return: 1(Success), -1(fails), errno is put accordingly
 *
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
