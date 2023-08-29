#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * set_string - Setss the value of a pointer to char.
 * @s: Pointer to a pointer to char.
 * @to: pointer to a char.
 */
void set_string(char **s, char *to)
{
	*s = (char *)malloc(strlen(to) + 1);

	if (*s != NULL)
	{
		strcpy(*s, to);
	}
	else
	{
		fprintf(stderr, "Memory allocation failed!\n");
	}
}
