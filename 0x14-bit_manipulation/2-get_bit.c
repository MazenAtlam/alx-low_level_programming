#include "main.h"

/**
 * binary_len - A function that gets the length of a number in binary
 * @n: The numner in decimal (base 10)
 *
 * Return: The length
 */
unsigned int binary_len(unsigned long int n)
{
	unsigned int length = 0;

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
 * get_bit - A function that returns the value of a bit at a given index
 * @n: The number in decimal (base 10)
 * @index: The index of the bit
 *
 * Return: The value of the bit at index, or -1 (if an error occured)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len = binary_len(n);

	if (index >= len)
		return (-1);

	while (index != 0)
	{
		n = n >> 1;
		index--;
	}

	return (n & 1L);
}
