#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated
 * @old_size: The size of the memory previously allocated
 * @new_size: The new memory block
 *
 * Return: A pointer to the new allocated memory,
 *		or NULL (if it fails or the memory is freed)
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);

	if (ptr == NULL)
	{
		free(ptr);

		return (new);
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *) new + i) = *((char *) ptr + i);
	}

	free(ptr);

	return (new);
}
