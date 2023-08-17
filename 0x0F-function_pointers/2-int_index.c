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
	if (size > 0)
	{
		if (array != NULL  && cmp != NULL)
		{
			int i = 0;
			
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++
			}
		}
	}

	return (-1);
}
