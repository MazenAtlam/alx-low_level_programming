#include "main.h"

/**
 * puts_half - A function that prints half of a string
 * @str: The string
 *
 * Return: Nothing
*/

void puts_half(char *str)
{
	int lenght = _strlen(str);

	if (lenght % 2 == 0)
	{
		int n = lenght / 2;
	}
	else
	{
		int n = (length - 1) / 2;
	}
	int i = lenght - n;

	while (n != 0)
	{
		_putchar(str[i]);
		i++;
		n--;
	}
	_putchar('\n');
}
