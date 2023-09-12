#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog_t struct.
 * @d: Pointer to the dog_t struct to be freed.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);

	free(d);
}
