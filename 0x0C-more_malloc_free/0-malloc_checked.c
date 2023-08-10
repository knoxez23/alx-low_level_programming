#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned int
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
