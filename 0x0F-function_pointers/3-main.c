#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0,success, 98,incorrect arg count, 99,invalid op, 100, div/mod by 0.
 */
int main(int argc, char *argv[])
{
	int num1;
	char *operator;
	int num2;
	int result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	func = get_op_func(operator);

	if (func == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = func(num1, num2);

	printf("%d\n", result);

	return (0);
}
