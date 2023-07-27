#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string
 * @str: The string to be edited
 *
 * Return: A pointer of the called string
*/

char *cap_string(char *str)
{
	int i = 0;
	char sep[] = {' ', ',', \n', ';', '.', '!', '?', '\"',
		'(', ')', '{', '}', '\t', '\0'};

	while (str[i] != '\0')
	{
		int j = 0;

		while (sep[j] != '\0')
		{
			if (str[i] == sep[j])
			{
				if (str[i] == '\t')
				{
					str[i] = ' ';
				}
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
			j++;
		}
		i++;
	}

	return (str);
}
