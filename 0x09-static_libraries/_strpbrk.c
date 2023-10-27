#include "main.h"
#include <stdio.h>

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
