#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - excecutes a functin in each elemnt of an array
 *@array: the array
 *@size: size of the array
 *@action: pointer to the function to use
 *Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		;
	else
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
