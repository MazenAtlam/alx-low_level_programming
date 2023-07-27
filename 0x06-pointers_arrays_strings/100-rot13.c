#include "main.h"

/**
 * rot13 - A function that encodes a string into rot13
 * @str: The string to be encoded
 *
 * Return: A pointer to the called string
*/

char *rot13(char *str)
{
	int i = 0;
	char s[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char pass[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[i] != '\0')
	{
		int j = 0;

		while (s[j] != '\0')
		{
			if (str[i] == s[j])
			{
				str[i] = pass[j];
			}
			j++;
		}
		i++;
	}

	return (str);
}
