#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the bytes to accept
 *
 * Return: Number of bytes in the initial segment of s that match accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found;
	char *acc;

	while (*s != '\0')
	{
		found = 0;

		for (acc = accept; *acc != '\0'; acc++)
		{
			if (*s == *acc)
			{
				length++;
				found = 1;
				break;
			}
		}

		if (found == 0)
			break;

		s++;
	}

	return (length);
}
