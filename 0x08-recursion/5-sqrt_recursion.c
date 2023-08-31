#include "main.h"

/**
 * _sqrt_helper - Recursive helper function to calculate the square root.
 * @n: The number for which the square root is calculated.
 * @low: The lower bound of the search interval.
 * @high: The upper bound of the search interval.
 *
 * This function performs a binary search to find the square root of a number
 * within a given interval.
 *
 * Return: The natural square root of 'n' if found, otherwise -1.
 */
int _sqrt_helper(int n, int low, int high)
{
	int mid = low + (high - low) / 2;
	int square = mid * mid;

	if (low > high)
	{
		return (-1);
	}

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_helper(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_helper(n, low, mid - 1));
	}
}

/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The number for which the square root is calculated.
 *
 * Return: The natural square root of 'n' if it exists, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0, n));
}
