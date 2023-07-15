#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints all differentCombinationsOf 2-2 digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0, j = 1;

	while (i <= 99)
	{
		while (j <= 99)
		{
			if (i != j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				if (i != 98 ||  j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	putchar('\n');
	return (0);
}
