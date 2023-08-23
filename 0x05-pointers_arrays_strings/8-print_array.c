#include "main.h"
#include <stdio.h>

/**
 * print_array - Writes a function that prints n elements of an array of ints.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);

	if (i != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
