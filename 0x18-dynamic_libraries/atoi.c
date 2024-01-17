#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted to an integer.
 *
 * Return: The integer rep of the input string @s.
 */
int _atoi(char *s)
{
	int n = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			n = n * 10 + (*s - '0');
		}
		else
		{
			break;
		}
		s++;
	}
	return (n * sign);
}
