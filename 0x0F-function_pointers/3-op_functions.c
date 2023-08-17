#include "3-calc.h"

/**
 * op_add - finds sum
 * @a: num 1
 * @b: num 2
 *
 * Return: sun
 */
int op_add(int a, int b)
{

	return (a + b);
}

/**
 * op_sub - finds difference
 * @a: num1
 * @b: num2
 *
 * Return: diff
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds multiplication
 * @a: num1
 * @b: num2
 *
 * Return: mul
 */
int op_mul(int a, int b)
{

	return (a * b);
}

/**
 * op_div - finds division
 * @a: num1
 * @b: num2
 *
 * Return: div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - finds remainder of division
 * @a: num1
 * @b: num2
 *
 * Return: rem
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
