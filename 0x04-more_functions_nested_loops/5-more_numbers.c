#include "main.h"
/**
 *more_numbers - prints nu,bers 10 times
 *
 *Description:  function that prints 10 times the numbers, from 0 to 14
 *
 *Return: no return
 */
void more_numbers(void)
{
	int i;
	int count;

	for (count = '0'; count <= '9'; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i);
			}
			else
			{
				_putchar(i % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
