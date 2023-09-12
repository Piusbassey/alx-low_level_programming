#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a structure representing a dog with name, age, and owner
 * @name: a pointer to a character (string) representing the dog's name
 * @age: a floating-point number representing the dog's age
 * @owner: a pointer to a character (string) representing the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/* Define dog_t as an alias for struct dog*/
typedef struct dog dog_t;

/* Function prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
