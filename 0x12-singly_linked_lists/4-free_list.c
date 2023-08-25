#include "lists.h"
#include <stdlib.h>

/**
 * free_list - A function that frees a list_t list
 * @head: The list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	head = NULL;
}
