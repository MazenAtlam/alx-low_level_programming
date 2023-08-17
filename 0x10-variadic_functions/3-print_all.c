#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - A function that gets a character
 * @args: The arguments list
 * @s: The separator
 *
 * Return: A character
*/

void print_char(char *s, va_list args)
{
	printf("%s%c", s, va_arg(args, int));
}

/**
 * print_int - A function that gets an integer
 * @args: The arguments list
 * @s: The separator
 *
 * Return: An integer
*/

void print_int(char *s, va_list args)
{
	printf("%s%d", s, va_arg(args, int));
}

/**
 * print_float - A function that gets a float
 * @args: The arguments list
 * @s: The separator
 *
 * Return: A float
*/

void print_float(char *s, va_list args)
{
	printf("%s%f", s, va_arg(args, double));
}

/**
 * print_string - A function that gets a string
 * @args: The arguments list
 * @s: The separator
 *
 * Return: A pointer to an array of characters (srting)
*/

void print_string(char *s, va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s%s", s, str);
}

/**
 * print_all - A function that prints anything
 * @format: A constant string that determines the input type to be printed
 *
 * Return: Nothing
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list args;
	format_t f[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (f[j].type != NULL)
		{
			if (f[j].type[0] == format[i])
			{
				f[j].func(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);

}
