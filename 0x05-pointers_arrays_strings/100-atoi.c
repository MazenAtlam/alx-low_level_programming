#include "main.h"

/**
 * _atoi - A function that convert a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer, 0 (if there aren't any integers)
*/

int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	while (s[i] != '\0' && !(s[i] >= 48 && s[i] <= 57))
	{
		if (s[i] == 45)
		{
			sign = sign * (-1);
		}
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		num = (num * 10) + (s[i] - 48);
		i++;
	}

	return (sign * num);
}
