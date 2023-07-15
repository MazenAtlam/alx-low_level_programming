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
	int i = 0, j = 0, k = 0, z = 0;

	while (i <= 9)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				while (z <= 9)
				{
					if (i < k && j < z || i = k && j != z)
					{
						putchar(i + 48);
						putchar(j + 48);
						putchar(' ');
						putchar(k + 48);
						putchar(z + 48);
					if (i != 9 || j != 8 || k != 9 || z != 9)
					{
						putchar(',');
						putchar(' ');
					}
					}
					z++;
				}
				k++;
				z = 0;
			}
			j++;
			k = 0;
			z = 0;
		}
		i++;
		j = 0;
		k = 0;
		z = 0;
	}
	putchar('\n');
	return (0);
}
