#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the string
 * @accept: Pointer to the bytes to search for
 *
 * Return: Pointer to the first matching byte in s, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	char *acc;

	while (*s != '\0')
	{
		for (acc = accept; *acc != '\0'; acc++)
		{
			if (*s == *acc)
				return (s);
		}
		s++;
	}

	return (NULL);
}
