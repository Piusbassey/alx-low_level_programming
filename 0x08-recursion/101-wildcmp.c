#include "main.h"

int wildcmp_recursive(char *s1, char *s2);

/**
 * wildcmp - Compare two strings with a wildcard character (*).
 * @s1: The first string.
 * @s2: The second string with wildcard(s).
 * Return: 1 if s1 and s2 can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2)))
		{
			return (1);
		}
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
