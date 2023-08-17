#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The size of the array argv
 * @argv: An array contains the command line strings written at runtime
 *
 * Description: A program that performs simple operations
 *
 * Return: 0 (success),
 *	or 98 (if the number of arguments is wrong),
 *	or 99 (if the operator is none of {+, -, *, /, %}),
 *	or 100 (if the user tries to divide [/ or %] by 0)
*/

int main(int argc, char **argv)
{
	int num1, num2;
	int (*op_f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");

		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");

		exit(100);
	}
	op_f = get_op_func(argv[2]);

	if (op_f == NULL)
	{
		printf("Error\n");

		exit(99);
	}
	printf("%d\n", op_f(num1, num2));

	return (0);
}
