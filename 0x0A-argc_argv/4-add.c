#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: (0) success and (1) error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		num = atoi(argv[i]);

		if (num <= 0)
		{
		printf("Error\n");
		return (1);
		}

		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
