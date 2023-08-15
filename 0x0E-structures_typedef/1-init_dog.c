#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: A pointer to the function struct dog
 * @name: The name of The dog
 * @age: The age of the dog
 * @owner: The name of the person who owns this dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
