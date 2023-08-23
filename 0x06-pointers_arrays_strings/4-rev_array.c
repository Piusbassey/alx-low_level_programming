#include "main.h"

/**
 * reverse_array - Reverses the contents of an array of int.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
