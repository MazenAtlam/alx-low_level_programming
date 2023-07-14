#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with fwrite
 *
 * Return: Always 1 (Not success)
*/

int main(void)
{
	FILE *fp;
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	fwrite(str, 1, sizeof(str), fp);
	return (1);
}
