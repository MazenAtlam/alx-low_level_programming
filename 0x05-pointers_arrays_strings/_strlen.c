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
