#include <stdio.h>

/**
 * main - entry point
 *
 * Description: printing all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int n = '0';

	for (n = 0; n < 16; n++)
	{
		if (n < 10)
		{
			putchar('0' + n);
		}
		else
		{
			char hex = 'a' + (n - 10);

			putchar(hex);
		}
		}
	putchar('\n');
	return (0);
}
