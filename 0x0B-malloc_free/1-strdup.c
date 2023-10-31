#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string or NULL.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
