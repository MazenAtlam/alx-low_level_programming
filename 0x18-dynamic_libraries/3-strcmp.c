#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 0 (Similar), >0 (s1[i] > s2[i]), <0 (s1[i] < s2[i])
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, cmp;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		cmp = s1[i] - s2[i];
		if (cmp)
		{
			return (cmp);
		}
		i++;
	}

	return (0);
}
