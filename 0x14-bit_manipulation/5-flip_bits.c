#include "main.h"

/**
 * flip_bits - A function that counts the bit to get from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fliped = m ^ n;
	unsigned int count = 0;

	while (fliped != 0)
	{
		if ((fliped & 1ul) != 0)
			count++;
		fliped = fliped >> 1;
	}

	return (count);
}
