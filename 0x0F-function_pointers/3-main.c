#include "3-calc.h"
#include <string.h>

#include <stdio.h>
#include <stdlib.h>
/**
 * main- run the program
 *
 * Return: 0 (success)
 * main - get_op_func has operators correlated with
 * func signs and funcs from op_func
 * if not 4 arguments, return Error & exit 98
 * if op is null, return Error & exit 99
 * if div or mod 0, return Error & exit 100
 * run calc, input one, operator, input two = pointer res to get_op
 * @argc: arguments
 * @argv: double pointer to arguments
 * Return: 0
 */
int main(int argc, char **argv)
int main(int argc, char *argv[])
{
	int a, b;
	char *o;
	int one, two, ans;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
		exit(98);
	}

	a = atoi(argv[1]);
	o = argv[2];
	b = atoi(argv[3]);
	one = atoi(argv[1]);
	two = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (get_op_func(o) == NULL || argv[2][1])
	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit (99);
		exit(100);
	}

	printf("%d\n", get_op_func(o)(a, b));

	res = get_op_func(get_op);
	ans = res(one, two);

	printf("%d\n", ans);
	return (0);
}
