/**
 * new_dog - creates a new dog
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to dog's owner name
 *
 * Return: pointer to the new dog, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;
	int name_len, owner_len;

	/* Allocate memory for the new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Find the lengths of the name and owner strings */
	for (name_len = 0; name[name_len] != '\0'; name_len++)
		;
	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
		;

	/* Allocate memory for the copied name and owner strings */
	new_name = malloc(sizeof(char) * (name_len + 1));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_owner = malloc(sizeof(char) * (owner_len + 1));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	/* Copy the name and owner strings */
	for (int i = 0; i <= name_len; i++)
		new_name[i] = name[i];
	for (int i = 0; i <= owner_len; i++)
		new_owner[i] = owner[i];

	/* Set the dog's properties */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
