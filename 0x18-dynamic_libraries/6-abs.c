#include "main.h"

/**
 * _abs - A function that computes the absolute value of an integer
 * @n: An integer that to be computed
 *
 * Return: The absolute value of an integer n
*/

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
