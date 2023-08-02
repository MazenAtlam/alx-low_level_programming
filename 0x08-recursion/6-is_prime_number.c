#include "main.h"

/**
 * is_prime - A function that checks if an integer is a prime number
 * @n: The input integer
 * @d: Represents all integers less than n
 *
 * Return: 1 (if n is a prime number), 0 (otherwise)
*/

int is_prime(int n, int d)
{
	if (d < n)
	{
		if (n % d != 0)
		{
			d++;
			return (is_prime(n, d));
		}
		else
		{
			return (0);
		}
	}

	return (1);
}

/**
 * is_prime_number - A function that checks if an integer is a prime number
 * @n: The input integer
 *
 * Return: 1 (if n is a prime number), 0 (otherwise)
*/

int is_prime_number(int n)
{
	if (n < 22)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, 2));
	}
}
