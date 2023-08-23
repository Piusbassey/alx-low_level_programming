#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The maximun number of characters to copy.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (original_dest);
}
