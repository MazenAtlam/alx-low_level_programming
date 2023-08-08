#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the concatenated string, or NULL (if it fails)
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = '\0';
	else if (s2 == NULL)
		s2 = '\0';
	for (i = 0; s1[i] != '\0'; i++)
		size1++;
	for (i = 0; s2[i] != '\0'; i++)
		size2++;
	s = malloc((size1 + size2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < size1; i++)
			s[i] = s1[i];
	}
	if (s2 != NULL)
	{
		for (i = size1 - 1, j = 0; j < size2; i++, j++)
			s[i] = s2[j];
	}

	return (s);
}
