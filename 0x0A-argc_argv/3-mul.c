#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: The number of arguments passed to the program.
 * @argv: An array containing the program command-line arguments.
 *
 * Return: Always (0) sucess.
 */
int main(int argc, char *argv[])
{
	int product = 1;
	int i;

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

			if (num != 0 || (num == 0 && argv[i][0] == '0'))
			{
				product *= num;
			}
	}

	printf("%d\n", product);

	return (0);
}
