#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies a string from source to destination.
 *
 * @dest: The destination string where the copy will be placed.
 * @src: The source string to be copied.
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while (*src != '\0')
	{
		*d++ = *src++;
	}
	*d = '\0';
	return (dest);
}
