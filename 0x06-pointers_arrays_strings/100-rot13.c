#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string
 * @s:pointer to string
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int i, j;
	char dt1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dtrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == dt1[j])
			{
				s[i] = dt[j];
				break;
			}
		}
	}
	return (s);
}
