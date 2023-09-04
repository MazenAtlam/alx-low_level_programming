#include "main.h"

/**
 * read_textfile - A function that reads and prints a file.txt to POSIX stdout
 * @filename: The file name
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print,
 *	or 0 (if the file can not be opened or read, filename is NULL,
 *		or write fails or does not write the expected amount of bytes)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[buff_size * 8];
	ssize_t ac_letters;
	int fptr;

	if (letters == 0 || filename == NULL)
		return (0);

	fptr = open(filename, O_RDONLY);
	if (fptr == -1)
		return (0);

	ac_letters = read(fptr, buffer, letters);
	ac_letters = write(STDOUT_FILENO, buffer, ac_letters);
	if (ac_letters == -1)
		return (0);

	close(fptr);

	return (ac_letters);
}
