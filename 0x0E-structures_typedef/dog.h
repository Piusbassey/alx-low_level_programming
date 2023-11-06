#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/* Prototypes: */

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
 * struct dog - Defines a structue to hold information about a dog.
 * @name: Pointer to a character string representing the dog's name.
 * @age: The age of the dog stored as a float.
 * @owner: Pointer to a character string representing the dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
