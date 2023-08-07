#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of a special character
 * @size: The size of The array
 * @c: The character which the array is filled with
 *
 * Return: A pointer to the array,or NULL (If it fails)
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
