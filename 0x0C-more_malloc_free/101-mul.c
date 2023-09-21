#include "main.h"

/**
 * is_digit - Check if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * str_to_int - Convert a string of digits to an integer
 * @str: The string to convert
 *
 * Return: The integer equivalent of the string
 */
int str_to_int(char *str)
{
	int result = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_digit(str[i]))
		{
			printf("Error\n");
			exit(98);
		}
		result = result * 10 + (str[i] - '0');
	}
	return (result);
}

/**
 * multiply - Multiply two positive numbers represented as strings
 * @num1: The first number
 * @num2: The second number
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	int len_result = len1 + len2;
	int *result = calloc(len_result, sizeof(int));
	int i;

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;
		int n1 = num1[i] - '0';
		int j;

		for (j = len2 - 1, k = i + len2; j >= 0; j--, k--)
		{
			int n2 = num2[j] - '0';
			int product = (n1 * n2) + result[k] + carry;

			result[k] = product % 10;
			carry = product / 10;
		}

		result[i] += carry;
	}

	int start = 0;
	int i;

	while (start < len_result && result[start] == 0)
	{
		start++;
	}

	if (start == len_result)
	{
		printf("0\n");
	}
	else
	{
		for (i = start; i < len_result; i++)
		{
			printf("%d", result[i]);
		}
		printf("\n");
	}

	free(result);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return 98;
	}

	char *num1 = argv[1];
	char *num2 = argv[2];
	int i;

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!is_digit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	int i;

	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!is_digit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	multiply(num1, num2);

	return (0);
}
