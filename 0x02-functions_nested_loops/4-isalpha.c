#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: the letters to be printed.
 *
 * Return: 1 if c is lowercase or uppercase or 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	return (1);
	}
	return (0);
}
