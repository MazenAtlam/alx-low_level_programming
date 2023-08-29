#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data of a listint_t
 * @head: The list
 *
 * Return: The sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
