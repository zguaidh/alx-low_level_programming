#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: printing three digits combinations
 *
 * Return: 0
 */
int main(void)
{
	int x = 0;
	int a;
	int b;

	int y;
	int c;
	int d;

	while (x <= 98)
	{
		a = (x / 10 + '0');
		b = (x % 10 + '0');
		y = 0;
		while (y <= 99)
		{
			c = (y / 10 + '0');
			d = (y % 10 + '0');

			if (x < y)
			{
				putchar(a);
				putchar(b);
				putchar(' ');
				putchar(c);
				putchar(d);

				if (x != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
