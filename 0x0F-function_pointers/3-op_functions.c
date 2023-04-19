#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - returns the sum of a and b
 * @a: number 1
 * @b: number 2
 *
 * Return: sum of a and b
 * op_add - 5 functions
 * @a: input one
 * @b: input two
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: number 1
 * @b: number 2 
 *
 * Return: difference of a and b
 * op_sub - 5 functions
 * @a: input one
 * @b: input two
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: number 1
 * @b: number 2
 *
 * Return: product of a and b
 * op_mul - 5 functions
 * @a: input one
 * @b: input two
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: number 1
 * @b: number 2
 *
 * Return: result of the division of a by b
 * op_div - 5 functions
 * @a: input one
 * @b: input two
 * Return: 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);	
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: number 1
 * @b: number 2
 *
 * remainder of the division of a by b
 * op_mod - 5 functions
 * @a: input one
 * @b: input two
 * Return: 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
