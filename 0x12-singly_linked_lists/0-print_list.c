#include "lists.h"
#include <stdio.h>

/**
 * _strlen A function that gets the length of a string
 * @str: The string
 *
 * Return: The length of the string
*/

unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0' && str != NULL)
		i++;

	return (i);
}

/**
 * print_list - A function that prints all the elements of a list_t list
 * @h: The list to be printed
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", _strlen(h->str), h->str);
		h = h->next;
		i++;
	}

	return (i);
}
