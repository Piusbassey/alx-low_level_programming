#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates the first occurrence of a character.
 *
 * @s: The string to be searched.
 * @c: The character to search for.
 *
 * Return: A pointer to the first occurrence or  NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
	return (NULL);
}
