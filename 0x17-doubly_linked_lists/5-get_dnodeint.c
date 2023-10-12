#include "lists.h"

/**
 * get_dnodeint_at_index - A function that gets the node at an index of dlist
 * @head: The first element in the linked list
 * @index: The index of the required node
 *
 * Return: The node at this index , or NULL (if the node does not exist)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
