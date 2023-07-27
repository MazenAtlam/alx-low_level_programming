#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: A pointer to the called string
*/

char *leet(char *str)
{
	int i = 0;
	int pass[] = {4, 3, 0, 7, 1};
	char lower[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char upper[] = {'A', 'E', 'O', 'T', 'L', '\0'};

	while (str[i] != '\0')
	{
		int j = 0;

		while (lower[j] != '\0' && upper[j] != '\0')
		{
			if (str[i] == lower[j] || str[i] == upper[j])
			{
				str[i] = pass[j] + 48;
			}
			j++;
		}
		i++;
	}

	return (str);
}
