#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: The memory area pointer
 * @b: The constant byte to be printed
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
