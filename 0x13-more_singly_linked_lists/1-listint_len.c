#include "lists.h"
#include <stddef.h>

/**
 * listint_len - A function that gets the number of elements in a linked list
 * @h: The list
 *
 * Return: The number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
