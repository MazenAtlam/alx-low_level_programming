#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: The string
 *
 * Return: The length of the sting s
*/

int _strlen_recursion(char *s)
{
	int add = 1;

	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (add + _strlen_recursion(s));
	}
}
