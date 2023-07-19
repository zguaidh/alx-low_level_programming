#include "function_pointers.h"
#include <stdio.h>

/**
 *int_index - function that searches for an integer
 *@array: the array of integers
 *@size: number of elements in the array
 *@cmp: pointes to the compare function
 *
 *Return: index of the element or -1 if no matche
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	else if (array == NULL || cmp == NULL)
	{
		;
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
