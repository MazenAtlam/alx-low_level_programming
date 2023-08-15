#include "dog.h"
#include <stdio.h>

/**
 * print_dog - A function that prints struct dog
 * @d: A pointer to the function struct dog
 *
 * Return: Nothing
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == 0)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("Age: (nil)");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == 0)
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
