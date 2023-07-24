#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, length;

	char *start, *end = s;

	for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++)
	{
		end++;
	}
	length = i + 1;
	start = s;
	for (i = 0; i < length / 2; i++)
	{
		char x;
		x = *end;
		*end = *start;
		*start = x;
		start++;
		end--;
	}
	end[length + 1] = '\0';
}
