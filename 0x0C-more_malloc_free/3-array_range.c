#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates array of integers
 * @min: integer
 * @max: integer
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i;
	unsigned int num_elements;

	if (max < min)
	{
		return (NULL);
	}

	num_elements = max - min + 1;
	arr = malloc(num_elements * sizeof(int));

	if (!arr)
		return (NULL);

	for (i = 0; i < num_elements; ++i)
	{
		arr[i] = min + i;
	}

	return (arr);
}
