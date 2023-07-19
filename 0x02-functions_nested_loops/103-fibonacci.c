#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the sum of the even-valued terms
 *	, in the Fibonacci sequence whose values do not exceed 4,000,000
 *				
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long ldigit, lsum, sum;

	ldigit = 1;
	lsum = 2;
	sum = 0;
	esum = 2;
	while (sum <= 4000000)
	{
		if (sum % 2 == 0)
		{
			esum += sum;
		}
		sum = lsum + ldigit;
		ldigit = lsum;
		lsum = sum;
	}
	return (0);
}
