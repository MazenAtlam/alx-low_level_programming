#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: The minimum value of the array integers
 * @max: The maximum value of the array integers
 *
 * Return: A pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *a;
	int i, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;
	a = malloc(n * sizeof(int));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		a[i] = i + min;

	return (a);
}
