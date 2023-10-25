#include "main.h"

/**
 * _puts_recursion - Prints a string, new line, using recursion.
 * @s: A pointer to the string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_putchar(*s);
	_putchar(*(s + 1));
}
