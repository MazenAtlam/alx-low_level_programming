#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entery point
 * @argc: The size of the array argv
 * @argv: An array contains the command line strings written at runtime
 *
 * Description: A program that prints its name
 *
 * Return: 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0");
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");

				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
