#include <stdio.h>
#include "main.h"
/**
 * main - Tests the case of a leap year.
 * Return: Always (0) success.
 */
int main(void)
{
	int month, day, year;

	month = 2;
	day = 29;
	year = 2000;

	day = convert_day(month, day);
	print_remaining_days(month, day, year);

	return (0);
}
