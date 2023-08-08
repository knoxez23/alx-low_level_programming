#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of characters
 * @size: variable for size
 * @c: character variable
 *
 * Return: pointer or NULL if fails or is zero
 */
char *create_array(unsigned int size, char c)
{
	int i;

	if (size == NULL)
	{
		return (NULL);
	}

	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
