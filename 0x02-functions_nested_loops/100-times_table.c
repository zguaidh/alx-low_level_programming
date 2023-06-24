#include "main.h"
/**
 *print_times_table - prints the n times table
 *@n: nu,ber of times that the times table will be printed
 *Return: no return
 */
void print_times_table(int n)
{
	int x;
	int y;

	if ((n <= 15) && (n >= 0))
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				int M = x * y;

				if (y == 0)
				{
					_putchar(M + '0');
				}
				else if (M < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(M + '0');
				}
				else if (M >= 10 && M < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((M / 10) + '0');
					_putchar((M % 10) + '0');
				}
				else if (M >= 100 && M < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((M / 100) + '0');
					_putchar(((M / 10) % 10) + '0');
					_putchar((M % 10) + '0');
				}
			}
		_putchar('\n');
		}
	}
}
