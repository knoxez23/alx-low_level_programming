#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 for no number and 1 for non-numbers
 */
int main(int argc, char *argv[])
{
	int i, result;
	char *ptr;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		ptr = argv[i];
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*(ptr + i)) == 0)
			{
				printf("Error\n");
			}
			else
			{
				result += atoi(argv[i]);
				printf("%d", result);
			}
		}
	}
}
