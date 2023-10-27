#include "main.h"
#include <stdio.h>

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
