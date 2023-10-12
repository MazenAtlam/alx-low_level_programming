#include "lists.h"

/**
 * sum_dlistint - A function that gets the sum of all data of a dlistint_t list
 * @head: The first element of the linked list
 *
 * Return: The sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
