#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - A function that adds a new node at the beginning of a list_t list
 * @head: The beginnig of the list
 * @str: The string to be stored in the new node
 *
 * Return: The address of the new element, or NULL (if it failed)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL || head == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(new_node);

		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);

		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
