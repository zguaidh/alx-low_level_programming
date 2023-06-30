#include "main.h"
/**
 *print_number - entry point
 *Descrition: function that prints an integer
 *@n: the number to be printed
 * Return: no return
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
