#include <stdio.h>
#include "dog.h"
/**
 *print_dog - function that prints a struct dog
 *@d: a pointer
 *
 *Return: no return
 */
void print_dog(struct dog *d)
{

	if (d)
	{
		if (d == NULL)
		{
			return;
		}
		else
		{
			if (d->name == NULL && d->owner != NULL)
			{
				printf("Name: (nil)\n");
				printf("Owner: %s\n", d->owner);
			}
			else if (d->name != NULL && d->owner == NULL)
			{
				printf("Name: %s\n", d->name);
				printf("Owner: (nil)\n");
			}
			else if (d->name == NULL && d->owner == NULL)
			{
				printf("Name: (nil)\n");
				printf("Owner: (nil)\n");
			}
			else
			{
				printf("Name: %s\n", d->name);
				printf("Age: %1f\n", d->age);
				printf("Owner: %s\n", d->owner);
			}
		}
	}
}
