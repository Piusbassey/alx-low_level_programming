#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes character to the standard output
 * @c: Character to be printed
 * Return: 1, &c, 1.
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
