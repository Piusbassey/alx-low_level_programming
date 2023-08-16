#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * @n: the character to print
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
	_putchar('\n');
	}
	}
}
