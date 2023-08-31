#include "main.h"

/**
 * is_prime_helper - Recursive helper function to check primality.
 * @n: The number to check for primality.
 * @i: The current divisor to check.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Check if a number is prime using recursion.
 * @n: The input integer to check for primality.
 *
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
