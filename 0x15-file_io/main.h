#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

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
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /*_main.h_*/
