#include "lists.h"

/**
 * delete_dnodeint_at_index - A function that deletes the node at an index of
 *				a dlistint_t linked list
 * @head: The first element of the linked list
 * @index: The index of the node to be removed
 *
 * Return: 1 (if it succeeded), -1 (if it failed)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i;

	if (!head || (*head) == NULL)
		return (-1);

	if (index == 0)
	{
		curr = *head;
		if ((*head)->next != NULL)
			(*head)->next->prev = NULL
		*head = (*head)->next;
		free(curr);

		return (1);
	}
	curr = *head;
	for (i = 0; i < index; i++)
	{
		if (curr == NULL)
			return (-1);

		curr = curr->next;
	}
	curr->prev->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	free(curr);

	return (1);
}
