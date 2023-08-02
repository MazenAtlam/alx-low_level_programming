#include "main.h"

/**
 * _sqrt - A function that gets the natural square root of a number
 * @n: The number
 * @root: The digit to be checked
 *
 * Return: The natural square root of n
*/

int _sqrt(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	else if (root * root < n)
	{
		root++;
		return (_sqrt(n, root));
	}
	else
	{
		return (-1);
	}
}


/**
 * _sqrt_recursion - A function that gets the natural square root of a number
 * @n: The number
 *
 * Return: The natural square root of n
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
