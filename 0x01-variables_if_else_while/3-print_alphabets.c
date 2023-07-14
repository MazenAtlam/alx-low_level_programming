#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the alphabet in lower/uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		putchar (alph[i]);
		i++;
	}
	putchar ('\n');

	return (0);
}
