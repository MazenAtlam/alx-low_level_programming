#include <stdio.h>

/**
 * first - A function that is executed before the main function starts
 *		and used to print a sentence
 *
 * Return: Nothing
 */
__attribute__((constructor))
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
