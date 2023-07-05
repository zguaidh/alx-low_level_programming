#include "main.h"

/**
 *_puts_recursion - function that prints a string, followed by a new line.
 *@s: the string to print
 *
 *Return: no return
 */

void _puts_recursion(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
