#include"main.h"
/**
 *puts2 - function that prints every other character of a string
 *@str: the string to print
 *Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (*str % 2 == 0)
		{
			_putchar(str[i]);
		}
		str++;
	}
	_putchar('\n');
}
