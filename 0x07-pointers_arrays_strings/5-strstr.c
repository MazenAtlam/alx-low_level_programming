#include "main.h"

/**
 * str_length - A function that gets the length of a string
 * @s: The string
 *
 * Return: The length
*/

int str_length(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i - 1);
}

/**
 * _strstr - A function that locates a substring
 * @haystack: The string to be checked
 * @needle: The substring
 *
 * Return: A pointer to the beginning of the located substring
 *		or NULL (if the substring is not found)
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, k, length = str_length(haystack);

	for (i = 0; i < length; i++)
	{
		while (haystack[i] == '\0')
		{
			i++;
		}
		k = i;
		for (j = 0; haystack[k] == needle[j]; j++)
		{
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
			k++;
		}
	}

	return (NULL);
}
