#include "main.h"

/**
 * print_alphabett_x10 - A function that prints 10 times the alphabet in lowercase
 *			,followed by a new line
 *
 * Return: Null
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int alph = 97;

		while (alph <= 122)
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
	}
}
