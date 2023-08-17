#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *@t: The number to be printed.
 * Return: Returns (0) success.
 */
int print_last_digit(int t)
{
	int a;

	a = t % 10;
	if (a < 0)
	{
	a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
