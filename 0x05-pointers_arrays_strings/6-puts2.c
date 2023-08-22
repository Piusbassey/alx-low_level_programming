#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the input string.
 */
void puts2(char *str)
{
	int a;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (a = 0; a < i; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
