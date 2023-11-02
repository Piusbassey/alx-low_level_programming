#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @str: String.
 *
 * Return: Length of the string.
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	if (str == NULL)
		return (0);
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the newly allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, concat_len;
	char *concat;
	unsigned int i;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;
	concat_len = len1 + n;

	concat = malloc(sizeof(char) * (concat_len + 1));

	if (concat == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			concat[i] = s1[i];
		}
	}

	if (s2 != NULL)
	{
		for (i = 0; i < n; i++)
		{
			concat[len1 + i] = s2[i];
		}
	}
	concat[concat_len] = '\0';

	return (concat);
}
