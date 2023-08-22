#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: The string to be printed
 * Return: Always (0) success.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
	_putchar('\n');
}
