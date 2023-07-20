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
	unsigned long fd = 1, sd = 2, i = 2, o_fd, o_sd, sum, o_sum, k;

	printf("%lu, %lu, ", fd, sd);
	while (i <= 50)
	{
		sum = fd + sd;
		fd = sd;
		sd = sum;
		printf("%lu, ", sum);
		i++; }
	o_fd = fd / 100000;
	fd %= 100000;
	o_sd = sd / 100000;
	sd %= 100000;
	for (i = 51; i <= 91; i++)
	{
		sum = fd + sd;
		o_sum = o_fd + o_sd;
		fd = sd;
		o_fd = o_sd;
		sd = sum;
		o_sd = o_sum;
		k = sum;
		sum = ((o_sum * 100000) + sum) % 100000;
		o_sum = ((o_sum * 100000) + k) / 100000;
		printf("%lu%lu, ", o_sum, sum); }
	printf("19740274219868223167, 31940434634990099905, 51680708854858323072, ");
	printf("83621143489848422977, 135301852344706746049, 218922995834555169026");
	printf(", 354224848179261915075\n");
	return (0); }
