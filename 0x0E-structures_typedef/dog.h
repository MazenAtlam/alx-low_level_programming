#ifndef DOG_H
#define DOG_H

#include <stdio.h>

typedef struct dog dog;

/**
 * struct dog - Poppy
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the person who owns this dog
 *
 * Description: Define a new type struct doig
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif