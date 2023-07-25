#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: The string
 *
 * Return: The lenght of the string
*/

int _strlen(char *s)
{
	int lenght = 0;

	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		while (s[lenght] != '\0')
		{
			lenght++;
		}
		return (lenght);
	}
}

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

/**
 * rev_string - A function that reverses a string
 * @s: The string
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int lenght = _strlen(s), j = lenght - 1, i;
	char *ch1 = "", *ch2;

	ch2 = _strcpy(ch1, s);
	for (i = 0; i < lenght; i++)
	{
		s[i] = ch2[j];
		j--;
	}
}
