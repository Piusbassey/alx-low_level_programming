#include "main.h"

/**
 * leet - Encodes a string into "1337" language.
 * @str: The string to be encoded.
 * Return: The encoded string.
 */
char *leet(char *str)
{
	char leet_map[] = "aAeEoOtTlL";
	char leet_replacements[] = "43071";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		int j;

		for (j = 0; leet_map[j] != '\0'; j++)
		{
			if (str[i] == leet_map[j])
			{
				str[i] = leet_replacements[j / 2];
				break;
			}
		}
	}

	return (str);
}
