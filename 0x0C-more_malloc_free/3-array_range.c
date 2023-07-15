#include "main.h"
#include <stdlib.h>
/**
 *array_range - creates an array
 *@min: the min value to start with
 *@max: the max value
 *
 *Return: ptr
 */
int *array_range(int min, int max)
{
	int *ptr;
	int len = max - min;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		ptr[i] = i;
	}
	*ptr = '\0';
	return (ptr);
}
