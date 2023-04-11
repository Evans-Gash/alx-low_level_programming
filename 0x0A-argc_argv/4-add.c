#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed as command-line arguments
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments passed to the program
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int sum = 0;
    int i, j;

    /* Check if any arguments were passed */
    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    /* Iterate through all arguments and add positive numbers */
    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                return (1);
            }
        }

        if (atoi(argv[i]) > 0)
        {
            sum += atoi(argv[i]);
        }
    }

    /* Print the result followed by a newline */
    printf("%d\n", sum);

    return (0);
}
