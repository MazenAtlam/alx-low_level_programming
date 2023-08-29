#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes a node at a given index
 * @head: The list
 * @index: The index of the list where the new node should be added
 *
 * Return: 1 (if it succeeded), or -1 (if it failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);

		return (1);
	}
	for (i = 0; (*head != NULL && (*head)->next != NULL); i++)
	{
		if (i == index - 1)
		{
			temp = (*head)->next;
			(*head)->next = temp->next;
			free(temp);

			return (1);
		}
		*head = (*head)->next;
	}
	return (-1);
}
