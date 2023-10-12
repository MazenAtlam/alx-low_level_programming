#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node at the end of a dlist
 * @head: The first element of the linked list
 * @n: The value of the new node
 *
 * Return: The address of the new element, or NULL (if it failed)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *curr;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = new_node;
		new_node->prev = curr;
	}
	return (new_node);
}
