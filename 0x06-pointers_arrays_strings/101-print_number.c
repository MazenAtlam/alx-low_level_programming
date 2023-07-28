#include "main.h"

/**
 * numLength - A function that computes the length of an integer
 * @num: The integer
 * Return: The length
*/

int numLength(int num)
{
	int length = 0;

	if (num >= -9 && num <= 9)
	{
		return (1);
	}
	else
	{
		while (num != 0)
		{
			num = num / 10;
			length++;
		}
	}

	return (length);
}

/**
 * print_number - A function that prints an integer
 * @n: The integer
 *
 * Return: Nothing
*/

void print_number(int n)
{
	int digit, denom = 1, zeros = numLength(n) - 1;
	unsigned int num;

	if (n < 0)
	{
		num = n * -1;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	while (zeros != 0)
	{
		denom = denom * 10;
		zeros--;
	}
	while (denom != 0)
	{
		digit = num / denom;
		num = num % denom;
		denom = denom / 10;
		_putchar(digit + '0');
		if (numLength(num) < numLength(denom))
		{
			_putchar('0');
			denom = denom / 10;
		}
	}
}
