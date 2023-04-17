#include <stdio.h>
#include "dog.h"

/**
 * struct dog - A struct representing a dog
 * @name: Freya (a string)
 * @age: 3.5 (a floating-point number)
 * @owner: Gash (a string)
 *
 * Description: This struct contains information about a dog, including its
 *              name, age, and owner's name.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
}
