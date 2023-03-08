#include "main.h"

/**
 * main - check the code
 *
 * @a: The string to be printed
 * _puts_recursion - Prints a string, followed by a new line.
 * Return: Always 0.
 */
void _puts_recursion(char *a)
{
	if (*a)
	{
		_putchar(*a);
		_puts_recursion(a + 1);
	}
	else
		_putchar('\n');
}
