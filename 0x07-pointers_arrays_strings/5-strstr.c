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
	int i = 0, j, k;

	if (needle[i] == '\0')
	{
		return (haystack);
	}
	while (haystack[i] != '\0')
	{
		k = i;
		for (j = 0; haystack[k] == needle[j]; j++)
		{
			if (needle[k + 1] == '\0')
			{
				return (haystack + i);
			}
			k++;
		}
		i++;
	}

	return (NULL);
}
