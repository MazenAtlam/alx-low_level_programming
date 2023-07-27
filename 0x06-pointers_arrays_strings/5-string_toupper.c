#include "main.h"

/**
 * string_toupper - A function that changes lowercase letters to uppercase
 * @str: The string to be edited
 *
 * Return: A pointer of the called string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
