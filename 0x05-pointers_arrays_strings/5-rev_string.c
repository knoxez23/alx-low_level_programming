#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;

	for(length = length + 1; s[length] != '\0'; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
