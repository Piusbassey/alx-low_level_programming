#include "main.h"

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: Pointer to the newly created array; NULL on failure or invalid input
 */
int *array_range(int min, int max)
{
	int i;
	int *array = (int *)malloc((max - min + 1) * sizeof(int));

	if (min > max)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		array[i - min] = i;
	}
	return (array);
}
