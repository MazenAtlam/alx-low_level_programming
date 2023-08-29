#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint - A function that adds a new node at the beginning of a list
 * @head: The beginnig of the list
 * @n: The integer to be stored in the new node
 *
 * Return: The address of the new element, or NULL (if it failed)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
