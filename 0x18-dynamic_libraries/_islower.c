#include "main.h"
#include <stdio.h>

/**
 * _islower - Checks if a char is a lowercase letter.
 * @c: The character to be checked.
 *
 * Return: 1 lowercase letter, 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
