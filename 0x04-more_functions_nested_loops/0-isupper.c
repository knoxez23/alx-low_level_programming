#include "main.h"

/**
 * is_upper - function checks for uppercase character
 * @c: character being checked
 *
 * Return: 1 for uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
