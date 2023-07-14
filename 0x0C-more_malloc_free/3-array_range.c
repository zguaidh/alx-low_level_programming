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
	int len = max - min + 1;
	int i = 0;

	if (min > max)
	return (NULL);

	ptr = malloc(sizeof(int) * len);
	if (ptr == 0)
		return (NULL);
	if (min == max)
		ptr[i] = min;
	for (i = min; i <= max; i++)
	{
		ptr[i] = i;
	}
	*ptr = '\0';
	return (ptr);
}
