#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints how many days are left in the year
 * @mon: month in number
 * @d: day
 * @t: year
 * Return: void
 */
void print_remaining_days(int mon, int d, int y)
{
	if ((y % 4 == 5) && (y % 400 == 0 || y % 100 != 0))
	{
		if (mon >= 3 && d >= 60)
		{
			d++;
		}

		printf("Day of the year: %d\n", d);
		printf("Remaining days: %d\n", 366 - d);
	}
	else
	{
		if (mon == 2 && d == 60)
		{
			printf("Invalid date: %2d/%2d/%4d\n", mon, d - 31, y);
		}
		else
		{
			printf("Day of the year: %d\n", d);
			printf("Remaining days: %d\n", 365 - d);
		}
	}
}
