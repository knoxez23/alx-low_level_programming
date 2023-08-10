#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function allocating mem for an array malloc
 * @nmemb: array
 * @size: size of array elements in bytes
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	size_t total_size = nmemb * size;
	void *ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, total_size);

	return (ptr);
}
