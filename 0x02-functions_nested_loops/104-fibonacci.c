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
		while (num != 0)
		{
			num /= 10;
			lenght++;
		}
	return (lenght);
	}
}

/**
 * check_2 - A function that compare Lenght
 * @a: The number to be compared
 * @b: The returned number
 *
 * Return: The edited number
*/

void check(unsigned long a, unsigned long & b);
{
	int d = 8 - numLenght(a);

	if (d != 0)
	{
		if (d == 1)
		{
			b *= 10;
		}
		else if (d == 2)
		{
			b *= 100;
		}
		else if (d == 3)
		{
			b *= 1000;
		}
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
	unsigned long fd = 1, sd = 2, i = 2, z = 100000000, k, o_fd, o_sd, sum, o_sum;

	printf("%lu, %lu, ", fd, sd);
	while (i <= 50)
	{
		sum = fd + sd;
		fd = sd;
		sd = sum;
		printf("%lu, ", sum);
		i++; }
	o_fd = fd / z;
	fd %= z;
	o_sd = sd / z;
	sd %= z;
	void check(fd, &o_fd);
	void check(sd, &0_sd);
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
			sum = ((o_sum * z) + sum) % z;
			o_sum = ((o_sum * z) + k) / z;
			void check_2(sum, &o_sum);
			printf("%lu%lu\n", o_sum, sum); }
		else
		{
			k = sum;
			sum = ((o_sum * z) + sum) % z;
			o_sum = ((o_sum * z) + k) / z;
			void check_2(sum, &o_sum);
			printf("%lu%lu, ", o_sum, sum); }	}
	return (0); }
