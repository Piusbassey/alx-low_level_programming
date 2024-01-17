#include "main.h"
#include <stdio.h>


/**
 * _strstr - Locates a substring within a string.
 *
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer or NULL is returned.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
