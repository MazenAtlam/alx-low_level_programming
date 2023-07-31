#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char
 * @s: The pointer
 * @to: The string
 *
 * Return: Nothing
*/

void set_string(char **s, char *to)
{
	int i;

	for (i = 0; *(s[i]) = '\0'; i++)
	{
		to[i] = *(s[i]);
	}
	to[i] = '\0';
}
