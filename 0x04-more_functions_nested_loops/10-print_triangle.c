#include "main.h"

/**
 * print_triangle - A function that prints a triangle by #
 * @size: The size of the triangle
 *
 * Return: Nothing
*/

void print_triangle(int size)
{

	if (size > 0)
	{
		int i, j, z;

		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < (size - i); j++)
			{
				_putchar(' ');
			}
			for (z = 0; z < i; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
