#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - A function that inserts a node at a given index
 * @head: The list
 * @idx: The index of the list where the new node should be added
 * @n: The new node
 *
 * Return: The address of the new node, or NULL (if it failed)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < idx - 1; i++)
	{
		if (*head == NULL)
			return (NULL);

		*head = (*head)->next;
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		if (idx != 0)
			return (NULL);

		new_node->next = NULL;
	}
	else
		new_node->next = (*head)->next;
	*head = new_node;

	return (new_node);
}
