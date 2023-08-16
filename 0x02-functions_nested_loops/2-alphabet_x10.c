#include <stdio.h>
#include "main.h"
/**
 * void print_alphabet_x10(void) - prints alphabets times 10
 *
 * Return: Always (0)
 */
void print_alphabet_x10(void)
{
	char n;
	int i;

	for (i = 0; i <= 10; i++)
	{
	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	}
}
