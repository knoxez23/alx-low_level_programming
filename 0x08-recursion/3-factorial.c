#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 */
int factorial(int n)
{
	int rslt = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	rslt *= factorial(n - 1);
	return (rslt);
}
