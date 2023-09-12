#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with a copy of the provided name and owner.
 * @name: Pointer to a string for the dog's name.
 * @age: Float for the dog's age.
 * @owner: Pointer to a string for the owner's name.
 *
 * Return: Pointer to the newly created dog_t struct, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	size_t name_len;
	size_t owner_len;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	name_len = strlen(name);
	owner_len = strlen(owner);

	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}

	new_dog_ptr->name = malloc(name_len + 1);
	new_dog_ptr->owner = malloc(owner_len + 1);

	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(new_dog_ptr->name, name);
	strcpy(new_dog_ptr->owner, owner);

	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
