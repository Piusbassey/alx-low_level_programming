#include <stdio.h>
#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *originalDest = dest;
	int srcIndex = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && srcIndex < n)
	{
		*dest = *src;
		dest++;
		src++;
		srcIndex++;
	}

	*dest = '\0';

	return (originalDest);
}
