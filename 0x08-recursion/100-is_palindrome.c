#include "main.h"

/**
 * length - A function that gets the size of a string
 * @s: The string
 *
 * Return: The size
*/

int length(char *s)
{
	int l = 1;

	if (s[0] == '\0')
	{
		return (0);
	}
	s++;

	return (l + length(s));
}

/**
 * _palindrome - A function that checks if a string is palindrome or not
 * @s: The string to be checked
 * @i: The first index
 * @j: The second index
 * @mod: A boolian variable checks if the length even or odd
 *
 * Return: 1 (if a string is a palindrome), 0 (if not)
*/

int _palindrome(char *s, int i, int j, int mod)
{
	if (j < 0)
	{
		return (1);
	}
	if (((i == j && mod == 1) || (i == j - 1 && mod == 0)) && s[i] == s[j])
	{
		return (1);
	}
	if (s[i] == s[j])
	{
		i++;
		j--;

		return (1 * _palindrome(s, i, j, mod));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - A function that checks if a string is palindrome or not
 * @s: The string to be checked
 *
 * Return: 1 (if a string is a palindrome), 0 (if not)
*/

int is_palindrome(char *s)
{
	int i = 0, j = length(s) - 1;

	return (_palindrome(s, i, j, (j + 1) % 2));
}
