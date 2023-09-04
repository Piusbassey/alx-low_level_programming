#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to use.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int i = 0; // Declare and initialize 'i'

	unsigned int res = 0;

	while ((s[i] == '-' || s[i] == '+') || (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}

	return (int)(res * sign);
}
