#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prins using write function
 * 		write(int fildes, const void *buf, size_t nbytes);
 *
 * Return: Always 1 (Not success)
*/

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
