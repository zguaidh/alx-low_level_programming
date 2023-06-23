#include "main.h"
/**
 *print_diagonal - draws a diagonal line
 *
 *Description: function that draws a diagonal line on the terminal.
 *
 *Return: no return
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (j = 1; j <= n; j	
