#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str);
{
	int length = 0;
	int start_index;

	while (str[length] != '\0')
	{
		length++;
	}

	start_index = (length + 1) / 2;

	for (int i = start_index; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
