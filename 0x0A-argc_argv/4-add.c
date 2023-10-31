#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point for adding positive numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array containing the program command-line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, num;

	if (argc == 1)
	{
		(void)printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = 0;
		j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				(void)printf("Error\n");
				return (1);
			}
			num = num * 10 + (argv[i][j] - '0');
			j++;
		}
		sum += num;
	}

	(void)printf("%d\n", sum);
	return (0);
}
