#include <stdio>

/**
 * main - Entry point
 *
 * Description: A C program that prints the alphabet except q and e in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alph[] = {abcdfghijklmnoprstuvwxyz};
	int i = 0;
	
	while (i < 24)
	{
		putchar (alph[i]);
		i++;
	}
	putchar ('\n');

	return (0);
}	
