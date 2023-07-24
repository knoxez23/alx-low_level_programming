#include "main.h"

/**
 * _puts - print string followed by a line
 * @str: character string
 *
 * Return: void
 */
void _puts(char *str)
{
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		str++;
	}
	_putchar('\n');
}
