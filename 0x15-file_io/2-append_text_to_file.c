#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: The file
 * @text_content: The text to be appended to the file
 *
 * Return: 1 (success), -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fptr;
	ssize_t bytes, length = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fptr = open(filename, O_CREAT | O_WRONLY | O_APPEND);
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
