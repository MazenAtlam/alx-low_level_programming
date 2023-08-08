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
	int i = 0;

	while (str[i] != '\0')
		i++;
	s = malloc((i + 1) * sizeof(char));
	if (s == NULL || str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';

	return (s);
}
