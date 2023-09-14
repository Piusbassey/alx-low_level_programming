#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0,success, 1,incorrect arg count, 2 for -ve no. of bytes.
 */
int main(int argc, char *argv[])
{
	int i;
	int num_bytes;
	char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_ptr = (char *)&main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", main_ptr[i]);

		if (i < num_bytes - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}

	return (0);
}
