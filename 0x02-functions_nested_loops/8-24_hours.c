#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Description: function that prints minute of the day of Jack Bauer
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar('h');
			_putchar(':');
			_putchar('m');
			_putchar('\n');
		}
	}
}
