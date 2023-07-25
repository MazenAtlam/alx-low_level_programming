#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: The string
 *
 * Return: The lenght of the string
*/

int _strlen(char *s)
{
	int lenght = 0;

	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		while (s[lenght] != '\0')
		{
			lenght++;
		}
		return (lenght);
	}
}

/**
 * rev_string - A function that reverses a string
 * @s: The string
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int lenght = _strlen(s), j = lenght - 1, i = 0;
	char ch[446];

	while (1)
	{
		if (s[i] != '\0')
		{
			ch[i] = s[i];
			i++;
		}
		else
		{
			ch[i] = '\0';
			break;
		}
	}
	for (i = 0; i < lenght; i++)
	{
		s[i] = ch[j];
		j--;
	}
}
