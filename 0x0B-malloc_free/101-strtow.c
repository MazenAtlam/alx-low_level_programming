#include "main.h"
#include <stdlib.h>

/**
 * word_counter - A funcction that gets the number of words at a string
 * @str: The string
 *
 * Return: The number of words
*/

int word_counter(char *str)
{
	int i, words = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			words++;
			while (str[i] != 32 && str[i] != '\0')
				i++;
		}
	}

	return (words);
}

/**
 * strtow - A function that splits a string into words
 * @str: The string
 *
 * Return: A pointer to to an array of strings which have the words
*/

char **strtow(char *str)
{
	int i, j, k, init, length = 0, words = word_counter(str);
	char **s;

	if (str == NULL || str[0] == '\0' || words == 0)
		return (NULL);

	s = malloc((words + 1) * sizeof(*s));
	if (s == NULL)
		return (NULL);

	for (i = 0, k = 0; str[i] != '\0'; i++)
	{
		while (str[i] == 32)
			i++;
		init = i;
		for (length = 0; str[i] != 32; i++, length++)
		{
			if (str[i] == '\0')
				break;
		}
		if (length > 0)
		{
			s[k] = malloc((length + 1) * sizeof(char));
			if (s[k] == NULL)
			{
				while (k--)
					free(s[i]);
				free(s);

				return (NULL);
			}
			for (j = 0; j < length; j++, init++)
				s[k][j] = str[init];
			s[k][j] = '\0';
			k++;
		}
	}
	s[k] = 0;

	return (s);
}
