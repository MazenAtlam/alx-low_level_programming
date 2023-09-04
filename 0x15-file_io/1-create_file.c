#include "main.h"

/**
 * _strlen - A function that computes the length of a string
 * @str: The string
 *
 * Return: The length
 */
ssize_t _strlen(char *str)
{
	ssize_t length = 0;

	if (str == NULL || str[0] == '\0')
		return (0);
	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * create_file - A function that creates a file
 * @filename: The file name
 * @text_content: The string to be written into the file
 *
 * Return: 1 (success), or -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes, length;
	int fptr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	length = _strlen(text_content);
	fptr = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fptr == -1)
		return (-1);

	bytes = write(fptr, text_content, length);
	if (bytes == -1 || bytes != length)
		return (-1);

	close(fptr);

	return (1);
}
