#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a linked list_t
 * @h: The list
 *
 * Return: The number of elements in a linked list_t
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
