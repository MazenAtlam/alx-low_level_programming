#include "search_algos.h"

/**
 * print_array - A function to print an array
 *
 * @array: A pointer to the first element of the array to be printed
 * @start: The first index
 * @end: The last index
 *
 * Return: Nothing
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array:");
	for (i = start; i < end; i++)
		printf(" %d,", array[i]);

	printf(" %d\n", array[i]);
}

/**
 * binary_search - A function that uses the linear search algorithem
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, low = 0, high = size - 1, sub_array_size = size;

	if (!array || size < 1)
		return (-1);

	while (sub_array_size > 1)
	{
		print_array(array, low, high);
		i = (high + low) / 2;

		if (array[i] == value)
			return (i);

		else if (array[i] > value)
			high = i - 1;

		else if (array[i] < value)
			low = i + 1;

		sub_array_size = high - low + 1;
	}
	print_array(array, low, high);

	if (array[low] == value)
		return (low);
	else
		return (-1);
}
