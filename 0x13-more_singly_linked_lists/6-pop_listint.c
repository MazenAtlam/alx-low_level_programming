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
	listint_t *temp = *head;
	int n;

	if (head == NULL || (*head) == NULL)
		return (0);

	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
