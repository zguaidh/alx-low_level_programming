#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory
 *@b: integer
 *
 *Return: pointer or 98 if it fails
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(unsigned int));
	if (ptr == NULL)
	{
		return ((void *)98);
		free(ptr);
}
	else
	{
		*ptr = b;
		return (ptr);
	}
}
