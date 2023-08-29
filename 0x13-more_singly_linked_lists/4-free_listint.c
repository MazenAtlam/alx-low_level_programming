#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - A function that frees a listint_t list
 * @head: The list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
