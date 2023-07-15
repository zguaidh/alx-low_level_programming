#include "main.h"
#include <stdlib.h>
/**
 *_realloc - reallocates a memory block
 *@ptr: the given pointer
 *@old_size: integer
 *@new_size: integer
 *
 *Return: no return
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p = (char *)malloc(new_size);
	unsigned int i;

	if (p == NULL)
	{
		free(ptr);
		free(p);
		return (NULL);
	}
	if (ptr == NULL && p != NULL)
	{
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		free(p);
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			*(p + i) = *((char *)ptr + i);
		}
		free(ptr);
	}
	if (new_size == old_size)
	{
		free(p);
		return (ptr);
	}
	return ((void *)p);

}
