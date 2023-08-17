#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			int result = i * a;

			if (result <= 9)
				_putchar(result + '0');
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

			if (a < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
