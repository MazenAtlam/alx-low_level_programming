#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t
 * @head: The list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *next;

	if (head == NULL)
		return (NULL);

	if (*head != NULL)
	{
		curr = *head;
		*head = NULL;
		while (curr != NULL)
		{
			next = curr->next;
			curr->next = *head;
			*head = curr;
			curr = next;
		}
	}
	return (*head);
}
