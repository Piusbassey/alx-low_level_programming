#include "main.h"

/**
 * array_range - Function that creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: Pointer to the newly created array or NULL(fail).
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int num_elements;

	if (min > max)
		return (NULL);

	num_elements = max - min + 1;
	arr = (int *)malloc(num_elements * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < num_elements; i++)
		arr[i] = min + i;

	return (arr);
}
