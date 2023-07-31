#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function prints sum of two diagonals of a square matrix
 * @a: an array represents a square matrix
 * @size: The size of the array
 *
 * Return: Nothing
*/

void print_diagsums(int *a, int size)
{
	int i, j = size - 1, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		sum2 = sum2 + a[j - 1];
		a = a + size;
	}
	printf("%d, %d\n", sum1, sum2);
}
