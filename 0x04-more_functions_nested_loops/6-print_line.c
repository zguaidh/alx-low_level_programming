#include "main.h"
/**
 *print_line - draws a strait line
 *
 *Description: function that draws a straight line in the terminal.
 *@n: integer
 *
 *Return: no return
 */
void print_line(int n)
{
	int i;

	if (n <= '0')
	{
		_putchar('\n');
	}
	else
	{
		for (i = '1'; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
