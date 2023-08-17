#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *s, va_list args);
void print_int(char *s, va_list args);
void print_float(char *s, va_list args);
void print_string(char *s, va_list args);

/**
 * struct format - A type selector
 * @type: The char to determine the type
 * @func: A pointer to the selected type function
 *
 * Description: A function that selects the correct type depends on a character
*/

typedef struct format
{
	char *type;
	void (*func)(char *, va_list);
} format_t;

#endif /*_variadic_function.h_*/
