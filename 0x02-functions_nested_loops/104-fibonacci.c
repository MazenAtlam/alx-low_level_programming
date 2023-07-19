#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the first 98 Fibonacci numbers
 *				, starting with 1 and 2
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	unsigned long ldigit, lsum, sum;

	ldigit = 1;
	lsum = 2;
	printf("%lu, %lu, ", ldigit, lsum);
	for (i = 3; i <= 98; i++)
	{
		sum = lsum + ldigit;
		ldigit = lsum;
		lsum = sum;
		if (i == 98)
		{
			printf("%lu\n", sum);
		}
		else
		{
			printf("%lu, ", sum);
		}
	}
	return (0);
}
