#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long fd = 1, sd = 2, i = 2, k, o_fd, o_sd, sum, o_sum;

	printf("%lu, %lu, ", fd, sd);
	while (i <= 50)
	{
		sum = fd + sd;
		fd = sd;
		sd = sum;
		printf("%lu, ", sum);
		i++;
	}
	o_fd = fd / 100000;
	fd %= 100000;
	o_sd = sd / 100000;
	sd %= 100000;
	for (i = 51; i <= 98; i++)
	{
		sum = fd + sd;
		o_sum = o_fd + o_sd;
		fd = sd;
		o_fd = o_sd;
		sd = sum;
		o_sd = o_sum;
		if (i == 98)
		{
			k = sum;
			sum = ((o_sum * 100000) + sum) % 100000;
			o_sum = ((o_sum * 100000) + k) / 100000;
			printf("%lu%lu\n", o_sum, sum);
		}
		else
		{
			k = sum;
			sum = ((o_sum * 100000) + sum) % 100000;
			o_sum = ((o_sum * 100000) + k) / 100000;
			printf("%lu%lu, ", o_sum, sum);
	}	}
	return (0);
}
