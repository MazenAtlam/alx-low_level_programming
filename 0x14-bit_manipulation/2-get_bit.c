#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: The number in decimal (base 10)
 * @index: The index of the bit
 *
 * Return: The value of the bit at index, or -1 (if an error occured)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	return ((n >> index) & 1);
}
