#include <stdio.h>

/**
 * main - Prints infinte loop incoming and avoided.
 * Return: Always (0) succcess.
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
