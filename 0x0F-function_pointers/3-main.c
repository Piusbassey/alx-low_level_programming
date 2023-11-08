#include "3-calc.h"

/**
 * is_numeric - Checks if a string is a numeric value
 * @str: String to be checked
 *
 * Return: 1 if the string is numeric, 0 otherwise
 */
int is_numeric(const char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (0);
	}

	while (*str != '\0') {
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}

	return (1);
}

int (*get_op_func(char *operator))(long int, long int);
/**
 * main - entry point for simple calculator program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or appropriate error codes (98, 99, 100)
 */
int main(int argc, char *argv[])
{
	long num1, num2;
	int result;
	int (*func)(long, long);

	if (argc != 4)
	{
		printf("Error: Invalid number of arguments.\n");
		return (98);
	}

	if (!is_numeric(argv[1]) || !is_numeric(argv[3]))
	{
		printf("Error: Invalid operand %s.\n", argv[1]);
		return (98);
	}

	num1 = strtol(argv[1], NULL, 0);
	num2 = strtol(argv[3], NULL, 0);

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error: Invalid operator %s.\n", argv[2]);
		return (99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0) {
		printf("Error: Division by zero.\ni");
		return (100);
	}

	result = func(num1, num2);
	printf("%d\n", result); 

	return (0);
}
