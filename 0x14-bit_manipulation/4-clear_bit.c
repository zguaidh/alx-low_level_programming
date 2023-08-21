#include "main.h"
/**
 *clear_bit - sets the value of a bit to 0 at a given index.
 *@n: the number
 *@index: the given index
 *
 *Return: an integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(unsigned long int) * 8;

	if (n == 0)
		return (0);
	if (index >= size)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
