#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the first 50 Fibonacci numbers
 *				, starting with 1 and 2
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long i;
	int j = 2;

	int a[50];

	a[0] = 1;
	a[1] = 2;
	printf("%d, %d, ", a[0], a[1]);
	for (i = 3; j <= 49; i++)
	{
		if (i == a[j - 1] + a[j - 2])
		{
			a[j] = i;
			if (j == 49)
			{
				printf("%d\n", a[j]);
			}
			else
			{
				printf("%d, ", a[j]);
			}
			j++;
		}
	}
	return (0);
}
