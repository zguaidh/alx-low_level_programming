#include "main.h"
/**
 *_puts - function that prints a string, followed by a new line, to stdout.
 *@str: the string to print
 *Return: no return
 */
void _puts(char *str)
{
	while (*str != '\0')
	{	_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

