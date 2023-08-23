#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The string to be encoded.
 * Return: The encoded string.
 */
char *rot13(char *str)
{
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		char *found = strchr(input, str[i]);

		if (found != NULL)
		{
			str[i] = output[found - input];
		}
	}

	return (str);
}
