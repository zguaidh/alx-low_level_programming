#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * Description:  function that computes the absolute value of an integer.
 * @i: the integer to be checked
 *
 * Return: 0
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	_putchar('\n');
	return (0);
}
