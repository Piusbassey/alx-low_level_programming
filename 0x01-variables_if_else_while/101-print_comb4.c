#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) success
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 7; a++)
	{
		for (b = 0; b <= 8; b++)
		{
			for (c = 0; b <= 9; c++)
			{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');

					if (a != 7)
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}
