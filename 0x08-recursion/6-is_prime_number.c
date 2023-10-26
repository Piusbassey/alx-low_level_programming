#include "main.h"

/**
 * is_prime_number - Check if the input is a prime number.
 * @n: The number to check for primality.
 * * @divisor: The current divisor being tested.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}

	return (is_prime_recursive(n, 2));
}
/**
 * is_prime_recursive - Recursive function to check if a num is prime.
 * @n: The number to check for primality.
 * @divisor: The current divisor being tested.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_recursive(n, divisor + 1));
}
