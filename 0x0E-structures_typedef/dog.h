#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Defines a structue to hold information about a dog.
 * @name: Pointer to a character string representing the dog's name.
 * @age: The age of the dog stored as a float.
 * @owner: Pointer to a character string representing the dog's owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
