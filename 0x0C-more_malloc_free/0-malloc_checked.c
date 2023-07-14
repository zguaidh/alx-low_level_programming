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
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
