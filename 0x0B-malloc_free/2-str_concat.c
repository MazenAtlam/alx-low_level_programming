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
	int i, j, size1 = 1, size2 = 1;

	for (i = 0; s1[i] != '\0'; i++)
		size1++;
	for (i = 0; s2[i] != '\0'; i++)
		size2++;
	s = malloc((size1 + size2) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		s[i] = s1[i];
	for (i = size1 - 1, j = 0; i < size2; i++, j++)
		s[i] = s2[j];
	return (s);
}
