#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: The string to be modified.
 */

void rev_string(char *s)
{
	int l = 0, i = 0;
	char temp;

	while (s[i++])
		l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}
