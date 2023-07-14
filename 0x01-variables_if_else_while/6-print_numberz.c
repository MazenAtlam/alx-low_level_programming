#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints all single digits of base 10
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + 48);
		i++;
	}
	putchar ('\n');

	return (0);
}
