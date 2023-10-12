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

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node || !h)
		return (NULL);

	new_node->n = n;
	curr = *h;
	for (i = 0; i < idx; i++)
	{
		if (curr == NULL || curr->next == NULL)
			return (NULL);

		curr = curr->next;
	}
	new_node->prev = curr->prev;
	curr->prev = new_node;
	new_node->next = curr;

	return (new_node);
}
