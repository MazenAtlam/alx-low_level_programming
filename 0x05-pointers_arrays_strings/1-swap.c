#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
