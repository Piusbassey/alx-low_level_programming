#include "unistd.h"

/**
 * _putchar - Takes a char as input and returns char.
 *
 * Return: The char that was written.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (c);
}
