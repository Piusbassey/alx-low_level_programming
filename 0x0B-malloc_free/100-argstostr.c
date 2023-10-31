#include "main.h"

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: Pointer to the new string or NULL.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, len = 0, total = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
			len++;
		total += len + 1;
	}

	str = malloc(sizeof(char) * total + 1);
	if (str == NULL)
		return (NULL);

	total = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			str[total] = av[i][len];
			len++;
			total++;
		}
		str[total] = '\n';
		total++;
	}
	str[total] = '\0';

	return (str);
}
