#include <stdio.h>
#include "dog.h"
/**
 *init_dog - function that initialize a variable of type struct dog
 *@d: the dog
 *@name: the name
 *@age: the age
 *@owner: the owner
 *
 *Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
