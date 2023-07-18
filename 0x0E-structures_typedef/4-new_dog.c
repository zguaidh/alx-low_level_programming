#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 *new_dog - function that creates a new dog.
 *@name: the name
 *@age: the age
 *@owner: the owner
 *Return: NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		free(name);
		free(owner);
		return (NULL);
	}
	else
	{
		new_dog->name = strdup(name);
		new_dog->age = age;
		new_dog->owner = strdup(owner);
	}
	if (name == NULL)
	{
		free(new_dog);
		free(new_dog->name);
	}
	if (owner == NULL)
	{
		free(new_dog);
		free(new_dog->owner);
	}
	return (new_dog);

}
