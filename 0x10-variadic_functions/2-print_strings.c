#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function that prints strings
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 *
 * Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *s;
	va_list strs;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(strs, char *);
		(s != NULL) ? printf("%s", s) : printf("(nil)");
		if (separator != NULL && i != n - 1)
			printf("%S", separator);
	}
	printf("\n");
	va_end(strs);
}
