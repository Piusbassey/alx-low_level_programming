#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alpbabets
 *
 * Return: Always (0) success
 */
void print_alphabet(void)
{
	int print_alphabet;

	for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
		_putchar(print_alphabet);
	_putchar('\n');
}
