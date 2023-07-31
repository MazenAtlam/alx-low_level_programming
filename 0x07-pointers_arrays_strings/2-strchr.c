#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: The string
 * @c: The character to be located
 *
 * Return: A pointer to the first occurrence of the character c in string s,
 *		or null (if the character is not found)
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return (NULL);
}
