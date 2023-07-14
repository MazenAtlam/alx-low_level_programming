#include <stdio>

/**
 * main - Entry point
 *
 * Description: A C program that prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;
	
	while (i < 10)
	{
		putchar (i);
		if (i != 9)
		{
			putchar (',');
			putchar (' ');
		}
		i++;
	}
	putchar ('\n');

	return (0);
}	
