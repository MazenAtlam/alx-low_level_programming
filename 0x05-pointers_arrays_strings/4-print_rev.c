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
 * print_rev - A function that prints a string, in reverse
 * @s: The string
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	int lenght = _strlen(s), i;

	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
