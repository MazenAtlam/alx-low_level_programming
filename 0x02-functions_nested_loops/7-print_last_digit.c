#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: A last digit's number to be printed
 *
 * Return: The value of the last digit
*/

int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar('0' + i);
	return (i);
}
