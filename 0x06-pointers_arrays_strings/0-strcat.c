#include "main.h"
#inlcude <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: pointer
 * @src: pointer
 *
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++
	}

	dest[i] = '\0';

	return dest;
}
