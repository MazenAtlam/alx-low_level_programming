#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 *
 * Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	if (separator == NULL)
	{
		va_end(nums);

		return;
	}
	va_start(nums, n);
	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(nums, unsigned int), separatot);
	va_end(nums);
	printf("\n");
}
