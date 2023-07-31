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

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			int j = 0;
			char *str;

			while (s[i] != '\0')
			{
				str[j] = s[i];
				j++;
				i++;
			}
			str[j] = '\0';

			return (str);
		}
		i++;
	}

	return (NULL);
}
