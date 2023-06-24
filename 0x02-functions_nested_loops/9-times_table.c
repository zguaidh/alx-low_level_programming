#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *
 *Return: no return
 */
void times_table(void)
{
	int x;
	int y;
	int M;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			M = x * y;
			if (y == 0)
			{
				_putchar(M + '0');
			}
			if (M < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(M + '0');
			}
			else if (M >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((M / 10) + '0');
				_putchar((M % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

