#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a listint_t
 * @head: The list
 * @index: The position of the node n
 *
 * Return: The node n, NULL (if the node does not exist)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
