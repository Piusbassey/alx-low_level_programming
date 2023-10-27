#include "main.h"
#include <stdio.h>

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		int found = 0;

		for (char *a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}
		if (found)
		{
			count++;
			s++;
		}
		else
		{
			break;
		}
	}
	return (count);
}
