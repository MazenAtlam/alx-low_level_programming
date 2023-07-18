#include "main.h"

/**
 * jack_bauer - A function that prints every minute of the day of Jack Bauer
 *
 * Return: Null
*/

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		int H_fdigit = i / 10;
		int H_sdigit = i % 10;

		for (j = 0; j <= 59; j++)
		{
			int M_fdigit = j / 10;
			int M_sdigit = j % 10;

			_putchar('0' + H_fdigit);
			_putchar('0' + H_sdigit);
			_putchar(':');
			_putchar('0' + M_fdigit);
			_putchar('0' + M_sdigit);
			_putchar('\n');
		}
	}
}
