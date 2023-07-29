#include "main.h"

/**
 * infinite_add - A function that adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: A pointer to the result
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int size = 0, i = 0, size_n1 = 0, size_n2 = 0, d1, d2, rem = 0;

	for (i = 0; n1[i] != '\0'; i++)
	{	size_n1++;	}
	for (i = 0; n2[i] != '\0'; i++)
	{	size_n2++;	}
	if (size_n1 >= size_n2)
	{	size = size_n1;	}
	else
	{	size = size_n2;	}
	if (size + 1 > size_r)
	{	return (0);	}
	r[size] = '\0';

	for (i = size - 1; i >= 0 ; i--)
	{
		size_n1--;
		size_n2--;
		if (size_n1 >= 0)
		{	d1 = n1[size_n1] - '0';	}
		else
		{	d1 = 0;	}
		if (size_n2 >= 0)
		{	d2 = n2[size_n2] - '0';	}
		else
		{	d2 = 0;	}
		r[i] = (d1 + d2 + rem) % 10 + '0';
		rem = (d1 + d2 + rem) / 10;
	}
	if (rem == 1)
	{
		r[size + 1] = '\0';
		if (size + 2 > size_r)
		{	return (0);	}
		for (i = size; i > 0; i--)
		{	r[i] = r[i - 1];	}
		r[0] = rem + '0';
	}

	return (r);
}
