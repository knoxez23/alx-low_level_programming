#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int j;

	while (s[length] != '\0')
	{
		length++;
	}

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
