#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n, or -1 if n is not.
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	} else if (n < 0)
	{
		return (-1);
	}

	if (n % 2 == 0)
	{
		return (_sqrt_recursion(n / 2));
	}
	else
	{
		return (-1);
	}
}
