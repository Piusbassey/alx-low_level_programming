#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring within a string
 * @haystack: Pointer to the string to search in
 * @needle: Pointer to the substring to search for
 *
 * Return: Pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *hayPtr = haystack;
		char *needlePtr = needle;

		while (*needlePtr != '\0' && *hayPtr == *needlePtr)
		{
			hayPtr++;
			needlePtr++;
		}

		if (*needlePtr == '\0')
			return haystack;

		haystack++;
	}

	return NULL;
}
