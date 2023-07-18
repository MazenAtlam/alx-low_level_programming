#include "main.h"

/**
 * print_sign - A function that prints the sign of a number
 * @n: A number that to be checked
 *
 * Return: 1 (+ve), 0 (zero), -1 (-ve)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
