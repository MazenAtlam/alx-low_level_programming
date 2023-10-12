#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list
 * @head: The first element of the linked list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;

	if (head != NULL)
	{
		while (curr->next != NULL)
		{
			curr = curr->next;
			free(curr->prev);
		}
		free(curr);
	}
}
