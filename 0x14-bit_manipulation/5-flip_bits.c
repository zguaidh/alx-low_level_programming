#include "main.h"
/**
 *flip_bits - returns the number of bits you would need
 *to flip to get from one number to another
 *
 *@n: the first number
 *@m: the second number
 *
 *Return: the number of bits you would need to flip
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int test = n ^ m, tot = 1;
	unsigned long int size = sizeof(unsigned long int) * 8;
	unsigned int i = 0;

	while (i < size)
	{
		if (tot == (test & tot))
			count++;
		tot <<= 1;
		i++;
	}
	return (count);

}
