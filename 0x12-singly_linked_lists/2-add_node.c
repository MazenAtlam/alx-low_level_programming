#include "lists.h"
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

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;

	return (new_node);
}
