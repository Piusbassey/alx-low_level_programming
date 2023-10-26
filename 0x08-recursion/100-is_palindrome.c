#include "main.h"
#include <string.h>

int is_palindrome_recursive(char *s, int start, int end);

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check for palindrome.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	return (is_palindrome_recursive(s, 0, len - 1));
}

/**
 * is_palindrome_recursive - Helper function.
 * @s: The string to check for palindrome.
 * @start: The starting index.
 * @end: The ending index.
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] == s[end])
	{
		return (is_palindrome_recursive(s, start + 1, end - 1));
	}

	return (0);
}
