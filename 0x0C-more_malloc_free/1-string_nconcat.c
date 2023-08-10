#include "main.h"
#include <stdlib.h>

/**
 * _strlen - A function that computes the length of a string
 * @s: The string
 *
 * Return: The length of The string
*/

unsigned int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The minimum length of the sring s2
 *
 * Return: A pointer to the concatenates string, or NULL (if it fails)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	if (n >= _strlen(s2))
		len2 = _strlen(s2);
	else
		len2 = n;
	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = len1, j = 0; j < len2; i++, j++)
		s[i] = s2[j];
	s[i] = '\0';

	return (s);
}
