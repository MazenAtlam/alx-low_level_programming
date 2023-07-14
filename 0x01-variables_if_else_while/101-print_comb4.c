#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints all different combinations of 3 digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0, j = 1, k = 2;

	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				if (i < j && j < k)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);

					if (i != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
	putchar('\n');

	return (0);
}
