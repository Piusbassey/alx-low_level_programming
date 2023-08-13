#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	int once;

	for (once = 0; once <= 9; once++)
	{
		putchar(once + '0');
		if (once < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
