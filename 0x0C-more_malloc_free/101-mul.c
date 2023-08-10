#include "main.h"
#include <stdlib.h>

/**
 * str_print - A function that prints a string
 * @s: The string
 *
 * Return: Nothing
*/

void str_print(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}

/**
 * _atoi - A function that convert a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer, 0 (if there aren't any integers)
*/

unsigned long int _atoi(char *s)
{
	unsigned long int i = 0, sign = 1, num = 0;

	while (s[i] != '\0' && !(s[i] >= 48 && s[i] <= 57))
	{
		if (s[i] == 45)
		{
			sign = sign * (-1);
		}
		i++;
	}

	while (s[i] >= 48 && s[i] <= 57)
	{
		num = (num * 10) + (s[i] - 48);
		i++;
	}

	return (sign * num);
}

/**
 * length - A function that computes the length of an integer
 * @num: The integer
 *
 * Return: The length
*/

unsigned long int length(unsigned long int num)
{
	unsigned long int length = 0;

	if (num == 0)
		return (1);

	while (num != 0)
	{
		num = num / 10;
		length++;
	}

	return (length);
}

/**
 * int_print - A function that print an integer
 * @num: The integer
 *
 * Return: Nothing
*/

void int_print(unsigned long int num)
{
	unsigned long int zeros, denom = 1, d;

	if (num == 0)
	{
		_putchar(num + 48);
		_putchar('\n');

		return;
	}

	zeros = length(num) - 1;
	while (zeros != 0)
	{
		denom = denom * 10;
		zeros--;
	}

	while (denom != 0)
	{
		d = num / denom;
		num = num % denom;
		denom = denom / 10;
		_putchar(d + 48);
	}

	_putchar('\n');
}

/**
 * check - A function that checks if a string has only integers or not
 * @s: The string
 *
 * Return: 0 (if the string has only integers), 1 (otherwise)
*/

int check(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] >= 48 && s[i] <= 57))
			return (1);
	}

	return (0);
}

/**
 * main - Entery point
 * @argc: The size of the array argv
 * @argv: An array contains the command line strings written at runtime
 *
 * Description: A program that multiplies two numbers
 *
 * Return: 0 (Success), 98 (Error)
*/

int main(int argc, char *argv[])
{
	unsigned long int mul;

	if (argc != 3)
	{
		str_print("Error");

		exit(98);
	}

	if (check(argv[1]) || check(argv[2]))
	{
		str_print("Error");

		exit(98);
	}

	mul = _atoi(argv[1]) * _atoi(argv[2]);
	int_print(mul);

	return (0);
}
