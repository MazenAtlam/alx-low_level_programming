#include "main.h"

/**
 * binary_len - A function that gets the length of a number in binary
 * @n: The numner in decimal (base 10)
 *
 * Return: The length
 */
long int binary_len(unsigned long int n)
{
	long int length = 0;

	if (n == 0 || n == 1)
		return (1);

	if ((long int) n < 0)
		return (64);

	while (n != 0)
	{
		length++;
		n = n >> 1;
	}

	return (length);
}

/**
 * print_binary - A function that prints the binary representation of a number
 * @n: The numner in decimal (base 10)
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	long int bit_pos = binary_len(n) - 1;

	while (bit_pos >= 0)
	{
		if ((n & (1 << bit_pos)) != 0)
			_putchar('1');
		else
			_putchar('0');
		bit_pos--;
	}
}
