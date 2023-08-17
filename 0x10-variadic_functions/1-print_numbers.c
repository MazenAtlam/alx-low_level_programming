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

	if (separator == NULL || n == 0)
	{
		printf("\n");
		va_end(nums);

		return;
	}
	va_start(nums, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(nums, unsigned int), separator);
	}
	printf("%d\n", va_arg(nums, unsigned int));
	va_end(nums);
}
