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
	int i, result;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = 1;

		for (i = 1; i < 3; i++)
		{
			result *= atoi(argv[i]);
		}

		printf("%d\n", result);
	}

	return (0);
}
