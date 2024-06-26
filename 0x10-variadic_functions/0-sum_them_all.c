#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: The number of integers to be added
 *
 * Return: The sum of all its parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);
	va_end(args);

	return (sum);
}
