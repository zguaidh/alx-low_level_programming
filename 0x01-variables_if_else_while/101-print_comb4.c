#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing three digits combinations
 *
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = '0'; x <= '7'; x++)
	{
		for (y = x + 1; y <= '8'; y++)
		{
			for (z = y + 1; z <= '9'; z++)
			{
			if (x != y && y != z && x != z)
			{
			putchar(x);
			putchar(y);
			putchar(z);
			}
			if (x + y + z != '7' + '8' + '9')
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
