#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entery point
 * @argc: The size of the array argv
 * @argv: An array contains the command line strings written at runtime
 *
 * Description: A program that prints the minimum number of coins
 *			to make change for an amount of money
 *
 * Return: 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{	printf("0\n");	}
	else
	{
		while (cents >= 25)
		{
			cents -= 25;
			coins++;	}
		while (cents >= 10)
		{
			cents -= 10;
			coins++;	}
		while (cents >= 5)
		{
			cents -= 5;
			coins++;	}
		while (cents >= 2)
		{
			cents -= 2;
			coins++;	}
		while (cents >= 1)
		{
			cents -= 1;
			coins++;	}
		printf("%d\n", coins);
	}

	return (0);
}
