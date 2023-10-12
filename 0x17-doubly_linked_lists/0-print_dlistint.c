#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of a dlistint list
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	if (!h)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		length++;
		h = h->next;
	}
	return (length);
}
