#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alph[] = {abcdefghijklmnopqrstuvwxyz};
	int i = 0;

	while (i < 26)
	{
		putchar (alph[i]);
		i++;
	}
	putchar ('\n');

	return (0);
}
