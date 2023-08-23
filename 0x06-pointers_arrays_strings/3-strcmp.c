#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 * @s1: The first integer.
 * @s2: The second integer.
 *
 * Return: Always (0) success.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	if (*s1 != '\0')
	{
		return (*s1);
	} else if (*s2 != '\0')
	{
		return (*s2);
	}

	return (0);
}
