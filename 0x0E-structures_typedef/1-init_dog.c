#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog variable
 * @d: Pointer to the struct dog variable to initialize
 * @name: Freya (Name of the dog)
 * @age: 2.5 (Age of the dog)
 * @owner: Gash (Name of the owner of the dog)
 *
 * Description: This function initializes a struct dog variable with the
 *              specified name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
