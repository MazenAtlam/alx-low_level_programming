#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 1 at a given index
 * @n: The nubmer in decimal (base 10)
 * @index: The index
 *
 * Return: 1 (success), or -1 (failture)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= 64)
		return (-1);

	*n = (*n) | (1L << index);
	*n = (*n) ^ (1L << index);

	return (1);
}
