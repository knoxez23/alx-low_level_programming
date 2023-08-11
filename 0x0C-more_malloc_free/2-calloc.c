#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - function for putting bytes to mem
 * @s: pointer to mem
 * @b: what to write
 * @n: n.o of bytes to write
 *
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _calloc - function allocating mem for an array malloc
 * @nmemb: array
 * @size: size of array elements in bytes
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (!(nmemb && size))
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (!ptr)
	{
		return (NULL);
	}

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
