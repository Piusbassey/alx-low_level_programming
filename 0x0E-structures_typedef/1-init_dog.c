#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog.
 * @d: Pointer to the struct dog variable to initialize.
 * @name: Pointer to a string for the dog's name.
 * @age: Float for the dog's age.
 * @owner: Pointer to a string for the owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
