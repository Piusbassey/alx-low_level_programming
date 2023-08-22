#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s how_long: The string to be reversed.
 */
void print_rev(char *s)
{
	int how_long = 0;
	int a;

	while (s[how_long] != '\0')
	{
		how_long++;
	}

	for (a = how_long - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
