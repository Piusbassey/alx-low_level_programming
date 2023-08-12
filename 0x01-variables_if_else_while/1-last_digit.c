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

	printf("Last digit of %d is %d ", n, i);

	if (i > 5)
	{
	printf("and is greater than 5");
	}
	else if (i == 0)
	{
	printf("and is 0");
	}
	else
	{
	printf("and is less than 6 and not 0\n");
	}
	return (0);
}
