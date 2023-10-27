#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Checks if a char is an alphabetic char.
 * @c: The character to be checked.
 *
 * Return: 1 or  0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
