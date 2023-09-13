#include <stdio.h>

/**
 * print_name - Prints a name using a specified formatting function.
 * @name: The name to be printed.
 * @f: A pointer to a function that formats and prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
