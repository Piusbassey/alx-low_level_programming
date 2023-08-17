#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @c: The number to printed.
 *
 * Return: 1 or 0 or -1
 */
int print_sign(int c)
{
	if (c > '0')
	{
	_putchar('+');
	return (1);
	}
	else if (c == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
