#include "main.h"

int find_sqrt(int n, int guess);
/**
 * _sqrt_recursion - Compute the natural square root of a num.
 * @n: The number for which to find the square root.
 * Return: The natural square root of n, or -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (find_sqrt(n, 2));
}

/**
 * find_sqrt - Helper function.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 * Return: The natural square root of n or -1 if not found.
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, guess + 1));
	}
}
