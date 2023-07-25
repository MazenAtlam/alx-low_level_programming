#include "main.h"

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
