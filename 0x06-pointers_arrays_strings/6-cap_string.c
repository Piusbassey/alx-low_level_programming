#include <stdbool.h>
#include <ctype.h>
#include "main.h"

/**
 * is_separator - Checks if a character is a separator.
 * @c: The character to check.
 * Return: True if the character is a separator, otherwise false.
 */
bool is_separator(char c)
{
	const char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}
	return (false);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: The capitalized string.
 */
char *cap_string(char *str)
{
	bool new_word = true;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_separator(str[i]))
		{
			new_word = true;
		} else if (new_word && islower(str[i]))
		{
			str[i] = toupper(str[i]);
			new_word = false;
		} else
		{
			new_word = false;
		}
	}

	return (str);
}
