#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing all possible combinations of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = '0'; x < '9'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			if (x != y)
			{
			putchar(x);
			putchar(y);
			}
			if (x != '8' || y != '9')
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
