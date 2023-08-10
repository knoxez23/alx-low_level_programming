#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned int
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	if (ptr == NULL)
	{
		printf("An error occured");
		exit(98);
	}
	else
	{
		ptr = (int *)malloc(b * sizeof(unsigned int));
		return (ptr);
	}
}
