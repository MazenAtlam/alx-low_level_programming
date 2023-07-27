#include "main.h"

/**
 * _strncat - A function that concatenates two strings
 * @dest: The string to be overwritten
 * @src: The string to be added
 * @n: The number of characters of the string src to be added
 *
 * Return: A pointer to the string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
