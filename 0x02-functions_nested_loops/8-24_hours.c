#include "main.h"

/**
 * jack_bauer - prints every minute of Jack's day
 *
 * Return: void
 */
void jack_bauer(void)
{
	for (int h = 0; h < 24; h++)
	{
		for(int min = 0; min < 60; min++)
		{
			_putchar(h);
			_putchar(':');
			_putchar(min);
			_putchar('\n');
		}
	}
}
