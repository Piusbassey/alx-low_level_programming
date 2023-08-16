#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * This function prints the lowercase alphabet 10 times, with each set of
 * characters separated by a newline character.
 *
 * Return: void (no return value)
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
