#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to be reversed
 * @i: loop variable
 * @j: loop vsriable
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (j = 0; s[length] >= 0; j++)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
