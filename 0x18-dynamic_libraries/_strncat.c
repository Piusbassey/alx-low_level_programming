#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: The destination string.
 * @src: The source string to be concatenated.
 *
 * Return: A pointer to the concatenated string in @dest.
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*d != '\0')
	{
		d++;
	}
	while (*src != '\0')
	{
		*d++ = *src++;
	}
	*d = '\0';
	return (dest);
}
