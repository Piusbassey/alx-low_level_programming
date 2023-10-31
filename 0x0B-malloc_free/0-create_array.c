#include "main.h"

/**
 * create_array - Creates an array of chars and special char.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Return: NULL if size = 0, otherwise a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
