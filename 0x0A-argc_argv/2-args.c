#include <stdio.h>

/**
 * main - Entery point
 * @argc: The size of the array argv
 * @argv: An array contains the command line strings written at runtime
 *
 * Description: A program that prints all arguments it receives
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
