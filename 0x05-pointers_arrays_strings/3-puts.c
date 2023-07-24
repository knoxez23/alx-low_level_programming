#include "main.h"

/**
 * _puts - print string followed by a line
 * @str: character string
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str);
		*str++
	}
}
