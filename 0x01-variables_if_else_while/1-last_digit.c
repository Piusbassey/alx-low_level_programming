#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 */

/* betty style.pl and betty-doc.pl*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d\t", n);
	if (n > 5)
	{
	printf("is %d and is greater than 5\n", n, n);
	}
	if (n == 0)
	{
	printf("%d and is 0\n", n);
	}
	if (n < !0)
	printf("%d and is less than 6 and not 0\n", n);
	return (0);
}
