#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: String to be reserved.
 */
void rev_string(char *s)
{
	int how_long = strlen(s);
	int a = how_long - 1;

	for (; a >= 0; a--)
	{
		putchar(s[a]);
	}
		putchar('\n');
}
