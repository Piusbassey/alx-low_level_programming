#include "main.h"
#include <stdio.h>

char *_memset(char *s, char b, unsigned int n)
{
	char *d = s;

	while (n > 0)
	{
		*d++ = b;
		n--;
	}
	return (s);
}
