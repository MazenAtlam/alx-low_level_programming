#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array
 * @nmemb: The number of elements of the array
 * @size: The size of each element
 *
 * Return: A pointer to the allocated memory, or NULL (if it fails)
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;

	return (s);
}
