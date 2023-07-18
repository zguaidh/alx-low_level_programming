#include <stdio.h>
#include <stdlib.h>
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
	unsigned int i, j, len1, len2;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (len1 = 0; name[len1] != '\0'; len1++)
		;
	for (len2 = 0; owner[len2] != '\0'; len2++)
		;
	new_dog->name = malloc(len1 + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';
	new_dog->age = age;
	new_dog->owner = malloc(len2 + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (j = 0; j < (len2 + 1); j++)
		new_dog->owner[j] = owner[j];
	return (new_dog);
}
