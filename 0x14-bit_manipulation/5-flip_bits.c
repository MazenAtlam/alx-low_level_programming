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
	unsigned int i, count = 0;

	for (i = 0; i < 64; i++)
	{
		if ((n & (1 << i)) != (m & (1 << i)))
			count++;
	}

	return (count / 2);
}
