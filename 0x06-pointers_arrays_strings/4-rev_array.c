#include "main.h"

/**
 * reverse_array - A  function that reverses the integers of an array
 * @a: The array of integers
 * @n: The number of elements of the array
 *
 * Return: Nothing
*/

void reverse_array(int *a, int n)
{
	int i, term, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		term = a[i];
		a[i] = a[j];
		a[j] = term;
	}
}
