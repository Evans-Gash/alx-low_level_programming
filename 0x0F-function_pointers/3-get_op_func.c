#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - contain the function that selects the correct function to
 * perform the operation asked by the user
 * @s: operator passed as argument to the program
 * 
 * Return: returns a pointer to the function that corresponds to the
 * operator given as a parameter.
 * get_op_func - matches operator from main
 * @s: op str
 * Return: 0
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	int i = 0;

	while (ops[i].op != NULL || *ops[i].op != *s)
	while (op_s[i].op)
	{
		if (*(op_s[i].op) == *s)
			return (op_s[i].f);
		i++;
	}

	return (ops[i].f);
	return (NULL);
}
