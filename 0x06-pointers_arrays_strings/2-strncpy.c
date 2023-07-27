#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: The string to store the copy
 * @src: The string to be copied
 * @n: The number of character of the string src to be copied
 *
 * Return: A pointer to the string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
