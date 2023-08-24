#include "lists.h"

/**
 * list_len - returns n.o of elements in
 * a linked list_t list
 * @h: ...
 * Return: n.o of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
