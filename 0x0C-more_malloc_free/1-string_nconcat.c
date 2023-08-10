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
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	unsigned int length_s1 = strlen(s1);
	unsigned int length_s2 = strlen(s2);

	if (n >= length_s2)
		n = length_s2;

	char *result;

	result = (char *)malloc(length_s1 + n + 1);
	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}
