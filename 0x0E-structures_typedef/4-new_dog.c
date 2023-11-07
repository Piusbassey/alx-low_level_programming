#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new struct dog
 * @name: Pointer to a character string representing the dog's name
 * @age: The age of the dog as a float
 * @owner: Pointer to a character string representing the dog's owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog != NULL)
	{
		new_dog->name = strdup(name);
		if (new_dog->name == NULL)
		{
			free(new_dog);
			return (NULL);
		}

		new_dog->age = age;

		new_dog->owner = strdup(owner);
		if (new_dog->owner == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
	}

	return (new_dog);
}
