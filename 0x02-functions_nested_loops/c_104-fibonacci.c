#include <stdio.h>

/**
 * numLenght - A function to compute the number lenght
 * @num: The number that its lenght is computed
 *
 * Return: The lenght of the number
*/

int numLenght(unsigned long num)
{
	int lenght = 0;

	if (num == 0)
	{
		return (1);
	}
	else
	{
		while (num != 0 && )
		{
			num /= 10;
			lenght++;
		}
		return (lenght);
	}
}

/**
 * main - Entry point
 *
 * Description: A C program that prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long fd = 1, sd = 2, i = 2, mx = 1000000000, o_fd, o_sd, sum, o_sum;

	printf("%lu, %lu, ", fd, sd);
	while (i <= 98)
	{
		sum = fd + sd;
		if (numLenght(sum) > numLenght(mx))
		{
			break; }
		fd = sd;
		sd = sum;
		printf("%lu, ", sum);
		i++; }
	o_fd = fd / mx;
	fd %= mx;
	o_sd = sd / mx;
	sd %= mx;
	for (; i <= 98; i++)
	{
		sum = fd + sd;
		o_sum = o_fd + o_sd;
		fd = sd;
		o_fd = o_sd;
		sd = sum;
		o_sd = o_sum;
		if (i == 98)
		{
			unsigned long k = sum;

			sum = ((o_sum * mx) + sum) % mx;
			o_sum = ((o_sum * mx) + k) / mx;
			printf("%lu%lu\n", o_sum, sum); }
		else
		{
			unsigned long k = sum;

			sum = ((o_sum * mx) + sum) % mx;
			o_sum = ((o_sum * mx) + k) / mx;
			printf("%lu%lu, ", o_sum, sum);	}	}
	return (0); }
