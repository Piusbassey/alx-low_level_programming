#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array containing the program command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
