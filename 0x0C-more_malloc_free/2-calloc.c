#include "main.h"
#include <stdlib.h>
/**
 *_memset - fills memory with a constant byte
 *@s: the pointer
 *@b: the constant to fill with
 *@n: bytes to use
 *Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;

	return (p);
}

/**
 *_calloc - allocates memory fo ra n array
 *@nmemb: the lenght of the array
 *@size: size of elements
 *
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	_memset(ptr, 0, nmemb);

	return (ptr);
}

