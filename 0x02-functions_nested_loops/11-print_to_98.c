#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers.
 * @n: The number to be printed.
 */
void print_to_98(int n)
{
	int i;
	if (n <= 98) {
		for (i = n; i <= 98; i++) {
			printf("%d", i);
			if (i != 98) {
				putchar(',');
				putchar(' ');
			}
		}
	} else {
		for (i = n; i >= 98; i--) {
			printf("%d", i);
			if (i != 98) {
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
