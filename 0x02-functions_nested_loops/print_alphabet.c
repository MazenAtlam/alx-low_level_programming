#include "main.h"

/**
 * print_alphabet - writes the alphabet, in lowercase
 *			, followed by a new line
 *
 * Return: Null
 */

void print_alphabet(void)
{
	int alph = 97;

	while (alph <= 122)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
