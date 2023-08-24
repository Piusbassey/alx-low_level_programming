#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int divisor;
	int num;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	divisor = 1;
	num = n;
	while (num / 10 > 0)
	{
		divisor *= 10;
		num /= 10;
	}

	while (divisor > 0)
	{
		_putchar('0' + (n / divisor));
		n %= divisor;
		divisor /= 10;
	}
}
