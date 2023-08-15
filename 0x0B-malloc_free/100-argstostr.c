#include "main.h"
#include <stdlib.h>

/**
 * _length - A function that returns the length of a string
 * @s: The string
 *
 * Return: The lenght of the string
*/

int _length(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
		lenght++;

	return (lenght);
}

/**
 * argstostr - A function that concatenates all the arguments of your program
 * @ac: The number of arguments entered
 * @av: An array of all arguments entered
 *
 * Return: A pointer to new string, or NULL (if it fails)
*/

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, total_length = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += (_length(av[i]) + 1);
	s = malloc((total_length + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			s[k] = av[i][j];
		s[k] = '\n';
	}
	s[k] = '\0';

	return (s);
}
