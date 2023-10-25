#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n, or -1 if n is not a natural square root.
 */
int _sqrt_recursion(int n)
{
	int guess;
	int square;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}
	
	if (n == 4)
	{
		return (2);
	}

	guess = n / 2;

	square = guess * guess;

	if (square <= n)
	{
		return (guess);
	}

	if (square > n)
	{
		return (_sqrt_recursion(n - 1));
	}
	return (_sqrt_recursion(n - square));
}
