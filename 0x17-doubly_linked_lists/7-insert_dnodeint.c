#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts a new node at an index
 * @h: The first element of the linked list
 * @idx: The position of the new node
 * @n: The value of the new node
 *
 * Return: The address of the new node, or NULL (if it failed)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *curr;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	curr = *h;
	for (i = 1; i < idx; i++)
	{
		if (curr == NULL)
			return (NULL);

		curr = curr->next;
	}
	if (curr->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node || !h)
		return (NULL);
	new_node->n = n;
	new_node->prev = curr;
	new_node->next = curr->next;
	curr->next->prev = new_node;
	curr->next = new_node;

	return (new_node);
}
