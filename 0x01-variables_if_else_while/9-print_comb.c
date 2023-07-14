#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints all combinations of single-digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar (i);
		if (i != 57)
		{
			putchar (',');
			putchar (' ');
		}
		i++;
	}
	putchar ('\n');

	return (0);
}
