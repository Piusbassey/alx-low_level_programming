#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0)
 */
int main(void)
{
	int i;
	int a;
	int count;

	for (i = 0; i <= 9; i++)
	{
		for (a = 1; a <= 9; a++)
		{
			if (i < a)
			{
				putchar('0' + i);
				putchar('0' + a);
				count++;
				if (count < 45)
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
