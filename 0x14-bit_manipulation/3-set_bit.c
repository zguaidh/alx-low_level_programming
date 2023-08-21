#include "main.h"

/**
 *set_bit - sets the value of a bit to 1 at a given index.
 *@n: the number
 *@index:the given index
 *
 *Return: an integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(unsigned long int) * 8;

	if (index >= size)
		return (-1);
	return (!(*n |= 1UL << index));
}
