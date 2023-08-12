#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	int base16;
	char alp;

	for (base16 = 0; base16 <= 9; base16++)
	putchar(base16 + '0');
	for (alp = 'a'; alp <= 'f'; alp++)
	putchar(alp);
	putchar('\n');
	return (0);
}
