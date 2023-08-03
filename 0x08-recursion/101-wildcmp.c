#include "main.h"

/**
 * astric_pass - A function that removes all the character (*)
 * @s: The sting that has astric(s)
 *
 * Return: The string starts with the character after the astric(s)
*/

char *astric_pass(char *s)
{
	if (s[0] == '*')
	{
		s++;
		return (astric_pass(s));
	}

	return (s);
}

/**
 * check_index - A function that checks the next index to be compared
 * @s1: The string to be checked
 * @s2: The string that has the next character to be compared
 *
 * Return: 1 (if the string s1 has the first character of the string s2),
 *		 0 (otherwise)
*/

int check_index(char *s1, char *s2)
{
	if (s1[0] == '\0')
	{
		return (0);
	}
	if (s1[0] == s2[0])
	{
		return (1);
	}
	else
	{
		s1++;
		return (check_index(s1, s2));
	}
}

/**
 * move_index - A function that moves index to be compared
 * @s1: The string to be edited
 * @s2: The string that has the next character to be compared
 *
 * Return: The string s1 after edit
*/

char *move_index(char *s1, char *s2)
{
	if (s1[0] == s2[0])
	{
		return (s1);
	}
	else
	{
		s1++;
		return (move_index(s1, s2));
	}
}

/**
 * wildcmp - A function that compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 (if the strings can be considered identical), 0 (otherwise)
*/

int wildcmp(char *s1, char *s2)
{
	int k = 0, ret = 1;

	if (s1[0] == '\0' && s2[0] == '\0')
	{
		return (1);
	}
	if (s2[0] == '*')
	{
		k = 1;
		s2 = astric_pass(s2);
		if (s2[0] == '\0')
		{
			return (1);
		}
		ret = check_index(s1, s2);
		if (ret == 1)
		{	s1 = move_index(s1, s2);	}
		else
		{	return (0);	}
	}
	if (s1[0] == s2[0])
	{
		s1++;
		s2++;
		ret = ret * wildcmp(s1, s2);
	}
	else if (k == 1)
	{
		ret = check_index(s1, s2);
		if (ret == 1)
		{	s1 = move_index(s1, s2);	}
		else
		{	return (0);	}
	}
	else
	{	return (0);	}

	return (ret);
}
