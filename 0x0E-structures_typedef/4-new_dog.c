#include "dog.h"
#include <stdlib.h>

/**
 * _length - A function that returns the length of a string
 * @s: The string
 *
 * Return: The lenght of the string
*/

int _length(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
		lenght++;

	return (lenght);
}

/**
 * _strcpy - A function that copies a string pointed to
 * @dest: The returned string
 * @src: The sring to be copied
 *
 * Return: The pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - A function that creates a new dog struct
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the person who owns this dog
 *
 * Return: A pointer to the prototype dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	ptr = (dog_t *) malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc((_length(name) + 1) * sizeof(char));
	if (ptr->name == NULL)
	{
		free(ptr);

		return (NULL);
	}
	ptr->owner = malloc((_length(owner) + 1) * sizeof(char));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);

		return (NULL);
	}
	ptr->name = _strcpy(ptr->name, name);
	ptr->age = age;
	ptr->owner = _strcpy(ptr->owner, owner);

	return (ptr);
}
