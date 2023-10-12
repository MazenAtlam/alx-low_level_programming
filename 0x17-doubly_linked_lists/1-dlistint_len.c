#include "lists.h"

/**
 * dlistint_len - A function that counts the elements in a dlistint_t list
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	if (!h)
		return (0);

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
