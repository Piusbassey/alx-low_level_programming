#include "main.h"

/**
 * isNumeric - Checks if the given string is composed only of digits
 * @str: String to be checked
 *
 * Return: 1 if composed only of digits, 0 otherwise
 */
int isNumeric(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: First number as a string
 * @num2: Second number as a string
 *
 * Return: Pointer to the result string or NULL
 */
char* multiply(const char *num1, const char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int lenResult = len1 + len2;
	int *result = calloc(lenResult, sizeof(int));
	char *resString = malloc((lenResult + 1) * sizeof(char));
	int i, j, k, mul, sum, carry;

	if (result == NULL || resString == NULL)
	{
		free(result);
		free(resString);
		return (NULL);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			k = i + j + 1;
			mul = (num1[i] - '0') * (num2[j] - '0');
			sum = mul + result[k] + carry;
			carry = sum / 10;
			result[k] = sum % 10;
		}
		result[i + j + 1] = carry;
	}

	k = 0;

	while (k < lenResult && result[k] == 0)
	{
		k++;
	}

	if (k == lenResult)
	{
		resString[0] = '0';
		resString[1] = '\0';
	}
	else
	{
		for (i = 0, j = k; j < lenResult; i++, j++)
		{
			resString[i] = result[j] + '0';
		}
		resString[i] = '\0';
	}

	free(result);
	return (resString);
}

/**
 * main - Entry point function, multiplies two positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on incorrect number of args.
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3 || !isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(argv[1], argv[2]);

	if (result == NULL)
	{
		printf("Allocation error\n");
		return (99);
	}

	printf("%s\n", result);
	free(result);
	return (0);
}
