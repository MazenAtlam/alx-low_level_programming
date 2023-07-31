#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: The string to be checked
 * @accept: The characters to be searched for
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *		or NULL (if no such byte is found)
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				char *str;

				for (j = 0; s[i] != '\0'; j++)
				{
					str[j] = s[i];
					i++;
				}
				str[j] = '\0';

				return (str);
			}
		}
	}

	return (NULL);
}
