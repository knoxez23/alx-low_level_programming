#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Checks whether prime or not
 * @n: number to be checked
 *
 * Return: (1) prime number, otherwise (0)
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - Check if number is prime
 * @n: number to be checked
 * @i: iteration
 *
 * Return: (1) prime, (0) otherwise
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	
	return (check_prime(n, i + 1))
}
