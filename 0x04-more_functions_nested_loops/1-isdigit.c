#include "main.h"

/**
 * _isdigit - checks if number falls from 0 to 0
 * @c: number being checked
 *
 * Return: 1 if number falls in category, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <=57)
	{
		return (1);
	}

	return (0);
}
