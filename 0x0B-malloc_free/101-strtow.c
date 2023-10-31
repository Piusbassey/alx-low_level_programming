#include "main.h"

/**
 * is_space - Checks if a character is a whitespace character.
 * @c: The character to check.
 *
 * Return: 1 if character is a whitespace, 0 otherwise.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
/**
 * word_count - Counts the number of words in a string.
 * @str: The string to check.
 *
 * Return: The number of words obtained within the string.
 */
int word_count(char *str)
{
	int count = 0, in_word = 0;

	while (*str != '\0')
	{
		if (is_space(*str))
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * copy_word - Copies a word from the input string to the result array.
 * @start: The start position of the word.
 * @length: The length of the word.
 *
 * Return: The copied word.
 */
char *copy_word(char *start, int length)
{
	int i;
	char *word = (char *)malloc(sizeof(char) * (length + 1));

	if (word == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		word[i] = start[i];
	}
	word[length] = '\0';
	return (word);
}

/**
 * split_words - Splits the input string into individual words.
 * @str: The string to be split.
 * @words: Number of words in the string.
 *
 * Return: The array of words obtained from the string.
 */
char **split_words(char *str, int words)
{
	int i = 0, word_len = 0, in_word = 0;
	char *start = NULL;
	int j = 0;
	char **result = (char **)malloc(sizeof(char *) * (words + 1));

	if (result == NULL)
		return (NULL);
	while (*str)
	{
		if (is_space(*str))
		{
			if (in_word == 1)
			{
				result[i] = copy_word(start, word_len);
				if (result[i] == NULL)
				{
					for (j = 0; j < i; j++)
						free(result[j]);
					free(result);
					return (NULL);
				}
				i++;
				in_word = 0;
				word_len = 0;
			}
		}
		else
		{
			if (in_word == 0)
			{
				start = str;
				in_word = 1;
			}
			word_len++;
		}
		str++;
	}
	if (in_word == 1)
	{
		result[i] = copy_word(start, word_len);
		if (result[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(result[j]);
			free(result);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: NULL or otherwise if fail.
 */
char **strtow(char *str)
{
	int words = word_count(str);

	if (str == NULL || *str == '\0' || words == 0)
		return (NULL);

	return (split_words(str, words));
}
