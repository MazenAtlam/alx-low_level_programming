#include "main.h"

/**
 * pow - A function that computes the power of a number
 * @base: The base number
 * @power: The power that raised to
 *
 * Return: The result of the power function
 */
unsigned int pow(unsigned int base, unsigned int power)
{
	if (power == 0)
		return (1);

	return (base * pow(base, power - 1));
}

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: A string of 0 and 1 chars
 *
 * Return: The converted number, or 0 (if string b has char that is not 0 or 1,
 *					or b is NULL)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, uint = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);

		uint += pow(2, i) * (b[i] - 48);
	}

	return (uint);
}
