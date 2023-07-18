#include "main.h"

/**
 * times_table - A function that prints the 9 times table
 *
 * Return: Null
*/

void times_table(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			int a = row * column;

			if (a > 9 && column != 0)
			{
				int fdigit = a / 10;
				int sdigit = a % 10;

				_putchar(',');
				_putchar(' ');
				_putchar('0' + fdigit);
				_putchar('0' + sdigit);
			}
			else if (a <= 9 && column != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + a);
			}
			else
			{
				_putchar('0' + a);
			}
		}
		_putchar('\n');
	}
}
