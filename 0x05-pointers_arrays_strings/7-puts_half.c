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
 * puts_half - A function that prints half of a string
 * @str: The string
 *
 * Return: Nothing
*/

void puts_half(char *str)
{
	int lenght = _strlen(str), i, n;

	if (lenght % 2 == 0)
	{
		n = lenght / 2;
	}
	else
	{
		n = (lenght - 1) / 2;
	}
	i = lenght - n;

	while (n != 0)
	{
		_putchar(str[i]);
		i++;
		n--;
	}
	_putchar('\n');
}
