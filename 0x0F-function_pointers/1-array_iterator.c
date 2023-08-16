#include "function_pointers.h"

/**
 * array_iterator - function that executes a funtion given as parameter
 * @array: array
 * @size: size
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL && size > 0)
	{
		unsigned int = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
