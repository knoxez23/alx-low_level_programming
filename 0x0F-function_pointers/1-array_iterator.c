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
	if (array != NULL && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
