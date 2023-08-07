#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints multiplication result
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 for success 1 error
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 1 || argc == 2)
	{
		printf("Error");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		result = num1 * num2;
		printf("%d", result);
	}

	return (0);
}
