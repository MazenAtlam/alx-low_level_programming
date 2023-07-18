#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - A function that prints all natural numbers from n to 98
 * @n: The starting number to be printed
 *
 * Return: Null
*/

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	printf("%d\n", n);
}
