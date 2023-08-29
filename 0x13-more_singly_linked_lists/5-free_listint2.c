#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - A function that frees a listint_t list
 * @head: The list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		*head = NULL;
	}
}
