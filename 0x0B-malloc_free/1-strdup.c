#include "main.h"
#include <stdlib.h>

/**
 *_strdup - function that returns a copy of the given string
 *@str: the given string
 *
 *Return: copy of the string or NULL if str=NULL or if insufficient memory
 */
char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == 0)
		return (NULL);

	for  (; i < size; i++)
		ptr[i] = str[i];

	return (ptr);
}
