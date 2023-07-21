#include "main.h"

/**
 * numLenght - A function that compute the lenght of an integer
 * @num: The integer that its lenght is computed
 *
 * Return: The lenght of the integer
*/

int numLenght(int num)
{
	int lenght = 0;

	if (num >= -9 && num <= 9)
	{
		return (1);
	}
	else
	{
		while (num != 0)
		{
			num /= 10;
			lenght++;
		}
		return (lenght);
	}
}

/**
 * print_number - A function that prints an integer
 * @n: The number to be printed
 *
 * Return: Nothing
*/

void print_number(int n)
{
	int zeros = numLenght(n) - 1, denom = 1, num;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (zeros > 0)
	{
		denom *= 10;
		zeros--;
	}
	while (denom != 1)
	{
		num = n / denom;
		n %= denom;
		_putchar(48 + num);
		denom /= 10;
		if (numLenght(n) != numLenght(denom))
		{
			_putchar(48);
			denom /= 10;
		}
	}
	_putchar(48 + n);
}
