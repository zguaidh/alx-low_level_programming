#include "main.h"

/**
 * main -entry point
 *
 * description: printing the alphabet
 *
 * Return: 0
 */

int main(void)
{
	int i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
	_putchar('\n');
	return (0);
}
