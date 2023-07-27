#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: The string to be overwritten
 * @src: The const string
 *
 * Return: A pointer to the argument dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
