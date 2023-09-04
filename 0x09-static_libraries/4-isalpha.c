#include "main.h"

/**
 * _isalpha - Checks foe alphabetic character.
 * @c: The character to be chaecked.
 *
 * Return: 1 if c is a letter. otherwise 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
