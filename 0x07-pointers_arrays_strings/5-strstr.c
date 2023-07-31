#include "main.h"

/**
 * str_length - A functhion that get the length of a string
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
	int i, k, length = str_length(needle);
	char *str;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int j = 0;

		if (haystack[i] == needle[j])
		{
			k = i;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[k] != needle[j])
				{
					break;
				}
				else
				{
					str[j] = haystack[k];
					counter++;
				}
				k++;
			}
			if (counter == length)
			{
				return (str);
			}
		}
	}

	return (NULL);
}
