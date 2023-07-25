#include <stdio.h>

/**
 * print_array - A function that prints n elements of an array of integers
 * @a: The array of integers
 * @n: The number of elements
*/

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d\n", a[i]);
			}
			else
			{
				printf("%d, ", a[i]);
			}
		}
	}
}
