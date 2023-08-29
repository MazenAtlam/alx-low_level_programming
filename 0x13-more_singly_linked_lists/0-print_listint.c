#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - A function that prints all the elements of a listint_t list
 * @h: The list to be printed
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
