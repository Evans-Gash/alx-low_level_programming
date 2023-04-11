#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments passed to the program
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Check if the program was passed two arguments */
		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}

	/* Convert the arguments to integers and multiply them */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	/* Print the result followed by a newline */
	printf("%d\n", result);

	return (0);
}
