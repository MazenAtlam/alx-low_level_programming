#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints all the elements of a list_t list
 * @h: The list to be printed
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("%s\n", h->str);
		i++;
	}

	return (i);
}
