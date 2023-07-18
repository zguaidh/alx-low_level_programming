#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - function that frees dogs.
 *@d: the pointer
 *Description: it frees the memory previously allocated
 *Return: no return
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
