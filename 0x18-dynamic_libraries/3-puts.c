#include "main.h"

/**
 * _puts - A function that prints a string
 * @s: The string
 *
 * Return: Nothing
*/

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
