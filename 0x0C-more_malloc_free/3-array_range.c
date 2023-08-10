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
	if (min > max)
	{
		return (NULL);
	}

	int num_elements = max - min + 1;
	int *arr = (int *)malloc(num_elements * sizeof(int));

	if (arr == NULL)
		return (NULL);
	int i;

	for (i = 0; i < num_elements; ++i)
		arr[i] = min + i;

	return (arr);
}
