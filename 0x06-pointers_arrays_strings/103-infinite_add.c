#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers represented as as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 *
 * Return: If the result cannot be stored in r, returns (0) success.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i = 0, j = 0, k = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;

	if (i >= size_r || j >= size_r)
		return (0);

	for (i -= 1, j -= 1; i >= 0 || j >= 0 || carry > 0; i--, j--)
	{
		int digit1 = i >= 0 ? n1[i] - '0' : 0;
		int digit2 = j >= 0 ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		r[k++] = (sum % 10) + '0';
	}

	r[k] = '\0';

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}

	return (r);
}
