#include "main.h"

/**
 * _pow_recursion - power function
 * @x: number to raised
 * @y: power
 *
 * Return: final value
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
