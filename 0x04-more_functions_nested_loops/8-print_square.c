#include "main.h"
/**
 *print_square - prints square
 *
 *Description: function that prints a square, followed by a new line.
 *@size: integer equal to the number of # in the side of a square
 *
 *Return: no return
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}




