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
	int *arr;
	unsigned int num_elements;

	if (max < min)
	{
		return (NULL);
	}

	num_elements = max - min;

	arr = malloc((num_elements + 1) * sizeof(int));

	if (!arr)
		return (NULL);

	do {
		*arr++ = min++;
	} while (min <= max);

	return (arr - num_elements - 1);
}
