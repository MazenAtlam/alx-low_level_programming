#include "main.h"

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
	int i, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (haystack[i] == needle[j])
		{
			if (needle[j] == '\0')
			{
				return (needle);
			}
			i++;
		}
	}

	return (NULL);
}
