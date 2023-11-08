#include "function_pointers.h"

/**
 * print_name - prints a name using a provided function
 * @name: name to be printed
 * @f: function pointer to print the name in a specific format
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
