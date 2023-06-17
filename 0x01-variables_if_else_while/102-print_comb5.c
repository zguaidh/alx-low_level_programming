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
	int a;
	int b;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				for (b = '0'; b <= '9'; b++)
				{
					if ((x != a && x != b) || (y != a && y != b))
					{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(a);
					putchar(b);
					}
					if (x + y + a + b != '9' + '8' + '9' + '9')
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
