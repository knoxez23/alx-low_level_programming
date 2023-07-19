#include "main.h"

/**
 * jack_bauer - prints every minute of Jack's day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h = 0;
	while (h < 24)
	{
		h++;
		int min = 0;
		while (min < 60)
		{
			min++;
			_putchar(h);
			_putchar(':');
			_putchar(min);
			_putchar('\n');
		}
	}
}
