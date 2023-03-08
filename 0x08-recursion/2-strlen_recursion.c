#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @a: The string to be measured.
 * Return: string length
 */
int _strlen_recursion(char *a)
{
	int len = 0;

	if (*a)
	{
		len++;
		len += _strlen_recursion(a + 1);
	}
}
