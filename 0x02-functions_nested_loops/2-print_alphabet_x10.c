#include "main.h"

/**
 * main - Entry point
 *
 * Description: A C program thatprints 10 times the alphabet in lowercase
 *			,followed by a new line
 *
 * Return: Null
 */

void print_alphabet_x10(void)
{
	int alph = 97;
	int i;

	for (i = 0; i < 10; i++)
	{
		while (alph != 122)
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
	}
}
