#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the alphabet without e&q in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alph[] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	while (i < 24)
	{
		putchar (alph[i]);
		i++;
	}
	putchar ('\n');

	return (0);
}
