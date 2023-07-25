#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: The string
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int lenght = _strlen(s), j = lenght - 1, i;
	char *ch = s;

	for (i = 0; i < lenght; i++)
	{
		s[i] = ch[j];
		j--;
	}
}
