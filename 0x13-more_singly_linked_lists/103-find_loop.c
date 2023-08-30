#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list
 * @head: The list
 *
 * Return: The address of the node where the loop starts,
 *		or NULL (if there is no loop)
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *stop_ptr;

	if (head == NULL)
		return (NULL);

	stop_ptr = head->next;
	while (stop_ptr != NULL)
	{
		if (stop_ptr == stop_ptr->next)
			return (stop_ptr);

		ptr = head;
		while (ptr != stop_ptr)
		{
			if (ptr == stop_ptr->next)
				return (ptr);

			ptr = ptr->next;
		}
		stop_ptr = stop_ptr->next;
	}

	return (NULL);
}
