#include <stdio.h>
#include "main.h"

/**
 * print_buffer - A function that prints a buffer
 * @b: The buffer
 * @size: The number of characters to be printed
 *
 * Return: Nothing
*/

void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size <= 0)
	{	putchar('\n');	}
	else
	{
		while (i < size)
		{
			printf("%08x: ", i);
			for (j = i; j < i + 10; j++)
			{
				if (j < size)
				{	printf("%02x", b[j]);	}
				else
				{	printf("  ");	}
				if (j % 2 != 0)
				{	putchar(' ');	}
			}
			for (j = 0; j < 10; j++)
			{
				if (i < size)
				{
					if (b[i] >= 32 && b[i] <= 126)
					{	putchar(b[i]);	}
					else
					{	putchar('.');	}
				}
				i++;
			}
			putchar('\n');
		}
	}
}
