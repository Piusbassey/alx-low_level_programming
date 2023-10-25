#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n, or -1 if n is not.
 */
int _sqrt_recursion(int n)
{
	int low;
	int high;
	int mid;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	low = 0;
	high = n;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (mid * mid == n)
		{
			return (mid);
		}

		if (mid * mid < n)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return (-1);
}
