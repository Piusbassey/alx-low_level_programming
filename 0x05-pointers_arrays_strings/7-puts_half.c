#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the input string.
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;
	int i;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}

	else
	{
		start_index = (length - 1) / 2;
	}

	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
