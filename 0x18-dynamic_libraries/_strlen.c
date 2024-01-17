#include "main.h"
#include <stdio.h>

/**
 * _strlen - Computes the length of a string.
 *
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
