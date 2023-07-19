#include "main.h"

/**
 * jack_bauer - prints every minute of Jack's day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h = 0, min;
	while (h < 24)
	{
		h++;
		min = 0;
		while (min < 60)
		{
			min++;
			_putchar((h / 10) + '0'); //Print the tens digit of the hour
			_putchar((h % 10) + '0'); //Print the ones digit of the hour
			_putchar(:)
			_putchar((min / 10) + '0'); //Print the tens digit of the hour
			_putchar((min % 10) + '0'); //Print the ones digit of the hour
			_putchar('\n');
		}
	}
}
