#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The file name
 * @text_content: The string to be written into the file
 *
 * Return: 1 (success), or -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes, length = _strlen(text_content);
	int fptr;

	if (filename == NULL)
		return (-1);

	fptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fptr == -1)
		return (-1);

	if (length != 0)
	{
		bytes = write(fptr, text_content, length);
		if (bytes == -1 || bytes != length)
			return (-1);
	}
	close(fptr);

	return (1);
}