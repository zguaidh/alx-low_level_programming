#include "main.h"
/**
 *get_endianness - checks the endianness
 *
 *Return: an integer
 */
int get_endianness(void)
{
	unsigned  int number = 1;

	return (*(char *) &number);
}
