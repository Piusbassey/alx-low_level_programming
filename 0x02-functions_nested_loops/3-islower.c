#include "main.h"

/**
 * is_lower - Checks for lower case characters.
 * @c: The character to be checked.
 *
 * Return: Returns 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
