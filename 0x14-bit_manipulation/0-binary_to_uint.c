#include "main.h"

/**
 * power - A function that computes the power of a number
 * @base: The base number
 * @pwr: The power that raised to
 *
 * Return: The result of the power function
 */
unsigned int power(unsigned int base, unsigned int pwr)
{
	if (pwr == 0)
		return (1);

	return (base * power(base, pwr - 1));
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
	int j, i = 0;
	unsigned int uint = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
		i++;
	for (i = i - 1, j = 0; i >= 0; i--, j++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);

		uint += power(2, j) * (b[i] - 48);
	}

	return (uint);
}
