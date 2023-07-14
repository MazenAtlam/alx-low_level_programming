#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints all different combinations of 2 digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0, j = 1;

	while (i <= 9)
	{
		while (j <= 9)
		{
			if (i < j)
			{
				putchar(i + 48);
				putchar(j + 48);

				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
