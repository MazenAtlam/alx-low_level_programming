#include <stdio.h>

/**
 * main - Entery point
 * @argc: The size of the array argv
 * @argv: An array contains the command line strings written at runtime
 *
 * Description: A program that prints the number of arguments passed into it
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
