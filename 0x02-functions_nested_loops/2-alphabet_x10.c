#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
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
