#include <stdio>

/**
 * main - Entry point
 *
 * Description: A C program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
        char alph[] = {abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ};
        int i = 0;

        while (i < 52)
        {
                putchar (alph[i]);
                i++;
        }
        putchar ('\n');

        return (0);
}
