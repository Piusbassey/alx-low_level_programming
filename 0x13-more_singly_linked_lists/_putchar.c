#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @x: The character to print
 *
 * Return: On success 1.
 * On erroe, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
