#define BUFF_SIZE 1024

#include "main.h"

/**
 * main - Entry point
 * @argc: The number of arguments entered
 * @argv: Pointers to arrays that store this arguments
 *
 * Description: A program that copies the content of a file to another file
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	char *file_from = argv[1], *file_to = argv[2];
	char buffer[BUFF_SIZE];
	int fptr_from, fptr_to, no_close, bytes_from = 1024, bytes_to = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);	}
	fptr_from = open(file_from, O_RDONLY);
	if (fptr_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);	}
	fptr_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fptr_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);	}
	while (bytes_from > 0)
	{
		bytes_from = read(fptr_from, buffer, BUFF_SIZE);
		if (bytes_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);	}
		bytes_to = write(fptr_to, buffer, bytes_from);
		if (bytes_to != bytes_from)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);	}	}
	fptr_from = close(fptr_from);
	fptr_to = close(fptr_to);
	if (fptr_from != 0 || fptr_to != 0)
	{
		no_close = (fptr_from != 0) ? fptr_from : fptr_to;
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", no_close);
		exit(100);	}
	return (0);
}
