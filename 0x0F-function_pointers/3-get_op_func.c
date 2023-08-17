#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - A function that selects the correct operation to perform
 * @s: The operation asked by the user
 *
 * Return: A pointer to the function that corresponds to the operator
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};
	int i = 0;

	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
