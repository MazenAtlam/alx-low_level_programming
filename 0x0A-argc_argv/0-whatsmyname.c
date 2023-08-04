#include <stdio.h>

/**
 * main - Entery point
 * @argc: The size of the array argv
 * @argv: An array contains the command line strings written at runtime
 *
 * Description: A program that prints its name
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
