#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that creats a new allocated space in memory
 * @str: A string to be allocated in memory
 *
 * Return: A pointer to the string str, or NULL (if it fails)
*/

char *_strdup(char *str)
{
	char *s;
	int size;

	for (size = 0; str[size] != '\0'; size++)
		;
	size++;
	s = malloc(size * sizeof(char));
	if (s == NULL || *str == '\0')
		return (NULL);

	return (s);
}
