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
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++;)
	{
		sum1 = sum1 + a[i][i] - '0';
	}
	for (i = size - 1; i > 0; i--)
	{
		sum2 = sum2 + a[i][i] - '0';
	}
	printf("%d, %d\n", sum1, sum2);
}
