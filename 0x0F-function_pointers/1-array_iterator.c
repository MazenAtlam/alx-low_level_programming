#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a parameter
 * @array: An array of integers
 * @size: The size of the array
 * @action: A pointer to the function you need to use
 *
 * Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < (int) size; i++)
		action(array[i]);
}
