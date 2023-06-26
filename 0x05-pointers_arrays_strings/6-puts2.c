#include"main.h"
/**
 *puts2 - function that prints every other character of a string
 *@str: the string to print
 *Return: 0
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
		{
			_putchar(*str + 0);
		}
		str++;
	}
	_putchar('\n');
}
