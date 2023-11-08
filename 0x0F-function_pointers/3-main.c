#include "3-calc.h"
/**
 * main - entry point for simple calculator program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or appropriate error codes (98, 99, 100)
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);

	return (0);
}
