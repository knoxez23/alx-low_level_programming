#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments followed by new line
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
