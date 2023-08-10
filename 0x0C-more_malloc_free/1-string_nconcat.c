#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: character s1
 * @s2: character s2
 * @n: unsigned int
 *
 * Return: NULL or pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;

	if (s1)
	{
		while (s1[s1_length])
			++s1_length;
	}

	if (s2)
	{
		while (s2_length < n && s2[s2_length])
			++s2_length;
	}

	ptr = malloc(sizeof(char) * s1_length + s2_length + 1);
	if (!ptr)
		return (NULL);

	for (n = 0; n < s1_length; ++n, ++ptr)
		*ptr = s1[n];

	for (n = 0; n < s2_length; ++n, ++ptr)
		*ptr = s2[n];

	*ptr = '\0';

	return (ptr - s1_length - s2_length);
}
