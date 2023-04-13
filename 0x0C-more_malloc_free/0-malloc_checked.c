#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
        void *ptr;

        ptr = malloc(b);
        if (ptr == NULL)
        {
                fprintf(stderr, "Error: malloc failed\n");
                exit(98);
        }
        return (ptr);
}
