#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - copy a memory area
 * @dest: a pointer to start of target area
 * @src:  pointer to start of  source area
 * @n:  n.o of bytes to copy
 *
 *
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	for (j = 0; j < n; ++j, ++src)
		dest[j] = *src;
	return (dest);
}


/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: a pointer to  memory previously allocated with malloc
 * @old_size: the byte size  of  allocated memory for ptr
 * @new_size: the new byte size of  new memory block
 *
 *
 * Return: If new_size is equal to old_size, do nothing and return ptr. If
 * new_size is equal to zero and ptr is not NULL, call free(ptr) and return
 * NULL. If memory allocation fails, return NULL. In all other cases, return
 * a pointer to the newly allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
		return (malloc(new_size));

	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}

	ptr_new = malloc(new_size);
	if (!ptr_new)
		return (NULL);

	_memcpy(ptr_new, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);

	return (ptr_new);
}
