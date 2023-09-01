#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 *
 * Return: 0 (if big endian), or 1 (if little endian)
 */
int get_endianness(void)
{
	unsigned long int n;

	return (*(char *) &n);
}
