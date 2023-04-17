#include <stdlib.h>
	#include "dog.h

/**
 * free_dog - frees memory allocated for a dog_t variable
 * @d: pointer to dog_t variable to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
