#include "main.h"

/**
 * puts2 - A function that prints every other character of a string
 * @str: The string
 *
 * Return: Nothing
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
