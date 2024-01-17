#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search in.
 * @accept: The string containing characters to search for.
 *
 * Return: A pointer to the first occurrence.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		for (char *a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
