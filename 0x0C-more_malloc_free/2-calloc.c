#include "main.h"
#include <stdlib.h>

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
	char *S;
	unsigned int S_size, i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	S = ptr;
	S_size = nmemb * size;
	for (i = 0; i < S_size; i++)
	{
		S[i] = 0;
	}

	return (S);
}

