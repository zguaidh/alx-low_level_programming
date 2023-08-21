#include "main.h"
/**
 *print_binary - prints the binary representation of a number
 *
 *@n: an unsigned long int nmber
 *
 *Return: no return
 */
void print_binary(unsigned long int n)
{
	int found = 0;
	unsigned long int size = sizeof(unsigned long int) * 8;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (!n)
		return;
	while (size != 0)
	{
		if (n & 1UL << --size)
		{
			_putchar('1');
			found = 1;
		}
		else if (found != 0)
			_putchar('0');
	}
	if (!found)
		_putchar('0');

}
