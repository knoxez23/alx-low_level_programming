#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: array
 * @size: elements numbers
 * @cmp: comparison function
 *
 * Return: The index of the first matching element, or -1 if not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i = 0;

    if (size > 0)
    {
        if (array != NULL && cmp != NULL)
        {
            while (i < size)
            {
                if (cmp(array[i]))
                    return (i);

                i++;
            }
        }
    }

    return (-1);
}

