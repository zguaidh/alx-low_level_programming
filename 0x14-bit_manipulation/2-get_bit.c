#include "main.h"
/**
 *get_bit - returns the value of a bit at a given index.
 *
 *@n: the number
 *@index: the given index
 *
 * Return: the value of the bit of the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int size = sizeof(unsigned long int) * 8;

	if (index >= size)
		return (-1);
	return (n >> index & 1);

}
