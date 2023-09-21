#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_buffer - Prints the content of a buffer in a formatted manner.
 * @b: The buffer to be printed.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	int i;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
	int j;

	for (j = 0; j < 10; j++)
		{
		if (i + j < size)
		{
			printf("%02x", (unsigned char)b[i + j]);
		}
		else
		{
			printf("  ");
		}

		if (j % 2 == 1)
		{
			printf(" ");
		}
	}

	int j;

	for (j = 0; j < 10; j++)
	{
		if (i + j < size)
		{
		if (isprint(b[i + j]))
		{
		printf("%c", b[i + j]);
		}
		else
		{
		printf(".");
		}
		}
		else
		{
		printf(" ");
		}
	}
		printf("\n");
	}
}
