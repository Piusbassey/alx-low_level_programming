#include "main.h"

/**
 * _calloc - Writes a function that allocates memory for an array.
 * @nmemb: Number of elements.
 * @size: Size in bytes of each element.
 *
 * Return: On success, pointer to allocated memory; failure, NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, total_size);
	return (ptr);
}
