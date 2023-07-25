#include "main.h"

/**
 * _strcpy - A function that copies a string pointed to
 * @dest: The returned string
 * @src: The sring to be copied
 *
 * Return: The pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		else
		{
			dest[i] = '\0';
			break;
		}
	}

	return (dest);
}
