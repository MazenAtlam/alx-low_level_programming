#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - A function that deletes the head node of a listint_t
 * @head: The list
 *
 * Return: The head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = (*head)->n;

	if (head != NULL && (*head) != NULL)
	{
		temp = *head;
		free(temp);
		*head = (*head)->next;
	}

	return (n);
}
