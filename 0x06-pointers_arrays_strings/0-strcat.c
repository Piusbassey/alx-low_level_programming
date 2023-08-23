#include <stdio.h>
#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be apended.
 */
char *_strcat(char *dest, char *src)
{
	char *originalDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (originalDest);
}
