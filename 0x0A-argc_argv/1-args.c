#include "main.h"

/**
 * main - Entry point.
 * @argc: The number of arguments passed to the program.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always (0) success.
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
