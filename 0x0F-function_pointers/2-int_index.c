#include "function_pointers.h"

/**
 * int_index - function  searches for integer
 * @array: array
 * @size: size
 * @cmp: comparison
 *
 * Return: index of first element and -1
 * for no element match and size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && size >= 0 && cmp != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	else
	{
		return (-1);
	}
}
