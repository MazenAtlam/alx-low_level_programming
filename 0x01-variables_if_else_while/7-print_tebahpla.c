#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the alphabet in lowercase in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 25;

	while (i >= 0)
	{
		putchar (alph[i]);
		i--;
	}
	putchar ('\n');

	return (0);
}
