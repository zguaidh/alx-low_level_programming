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
	int x = 0;

	for (x = 0; x < 10; x++)
	{
		putchar(48 + x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
