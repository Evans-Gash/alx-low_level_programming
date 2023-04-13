#include <stdlib.h>   /* for malloc and free */
#include "main.h"

/**
 * array_range - Creates an array of integers
 *
 * @min: Minimum value of the array
 * @max: Maximum value of the array
 *
 * Return: Pointer to the newly created array or NULL if failed
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
