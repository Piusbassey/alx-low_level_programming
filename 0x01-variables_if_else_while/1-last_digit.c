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
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;

	if (n > 5)
	{
	printf("Last digit of %d is %d and is greater than 5", n, i);
	}
	else if (i == 0)
	{
	printf("Last digit of %d and %d and is 0", n, i);
	}
	else
	{
	printf("Last digit of %d and %d is less than 6 and not 0\n", n, i);
	}
	return (0);
}
