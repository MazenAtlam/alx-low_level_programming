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
		for (column = 0; column <= 8; column++)
		{
			int a = row * column;

			_putchar('0' + a);
			if (column != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
