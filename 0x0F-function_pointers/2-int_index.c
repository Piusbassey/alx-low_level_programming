#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array of integers
 * @size: the number of elements in the array
 * @cmp: pointer to the function to compare values
 *
 * Return: index of the first element for which cmp function
 * does not return 0, -1 if no match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
