#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse
 * @s: The string to be printed
 *
 * Return: Nothing
*/

void _print_rev_recursion(char *s)
{
	char k;

	if (s[0] == '\0')
	{
		return;
	}
	k = s[0];
	s++;
	_print_rev_recursion(s);
	_putchar(k);
}
