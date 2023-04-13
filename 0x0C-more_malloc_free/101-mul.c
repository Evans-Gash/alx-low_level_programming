#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * is_digit - Checks if a string is composed only of digits
 * @s: The string to check
 *
 * Return: 1 if s is composed only of digits, 0 otherwise
 */
int is_digit(char *s)
{
        while (*s)
        {
                if (*s < '0' || *s > '9')
                        return (0);
                s++;
        }
        return (1);
}

/**
 * _strlen - Computes the length of a string
 * @s: The string to compute the length of
 *
 * Return: The length of s
 */
int _strlen(char *s)
{
        int len = 0;

        while (*s++)
                len++;

        return (len);
}

/**
 * mul - Multiplies two positive numbers
 * @num1: The first number
 * @num2: The second number
 *
 * Return: A pointer to a string containing the product of num1 and num2
 */
char *mul(char *num1, char *num2)
{
        int len1, len2, i, j, carry, n1, n2, sum;
        char *res;

        len1 = _strlen(num1);
        len2 = _strlen(num2);
        res = malloc(sizeof(char) * (len1 + len2));
        if (res == NULL)
                return (NULL);
        for (i = 0; i < len1 + len2; i++)
                res[i] = '0';
        for (i = len1 - 1; i >= 0; i--)
        {
                carry = 0;
                n1 = num1[i] - '0';
                for (j = len2 - 1; j >= 0; j--)
                {
                        n2 = num2[j] - '0';
                        sum = (res[i + j + 1] - '0') + (n1 * n2) + carry;
                        carry = sum / 10;
                        res[i + j + 1] = (sum % 10) + '0';
                }
                if (carry)
                        res[i + j + 1] = (carry % 10) + '0';
        }
        for (i = 0; res[i] == '0' && res[i + 1]; i++)
                ;
        return (res + i);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
        char *num1, *num2, *res;

        if (argc != 3)
        {
                printf("Error\n");
                return (98);
        }
        num1 = argv[1];
        num2 = argv[2];
        if (!is_digit(num1) || !is_digit(num2))
        {
                printf("Error\n");
                return (98);
        }
        res = mul(num1, num2);
        if (res == NULL)
                return (98);
        printf("%s\n", res);
        free(res);
        return (0);
}
