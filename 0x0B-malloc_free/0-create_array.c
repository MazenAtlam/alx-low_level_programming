#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of a special character
 * @size: The size of The array
 * @c: The character which the array is filled with
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));
	for (i = 0; i < size - 1; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';

	return (s);
}
