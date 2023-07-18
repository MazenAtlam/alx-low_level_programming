#include "main.h"

/**
 * print_times_table - A function that prints the n times table
 * @n: The number of times table
 *
 * Return: Null
*/

void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{ int row, column;

		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				int a = row * column;

				if (a > 99 && column != 0)
				{
					int fdigit = a / 100;
					int sdigit = (a % 100) / 10;
					int tdigit = (a % 100) % 10;

					_putchar(',');
					_putchar(' ');
					_putchar('0' + fdigit);
					_putchar('0' + sdigit);
					_putchar('0' + tdigit); }
				else if (a > 9 && column != 0)
				{
					int fdigit = a / 10;
					int sdigit = a % 10;

					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + fdigit);
					_putchar('0' + sdigit); }
				else if (a <= 9 && column != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + a); } else
				{
					_putchar('0' + a); }
			_putchar('\n'); }	}	}	}
