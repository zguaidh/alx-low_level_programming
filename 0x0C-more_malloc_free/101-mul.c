#include "main.h"
#include <stdlib.h>

/**
 *_puts - prints a string
 *@str: pointer
 *
 *Return: no return
 */
void _puts(char *str)
{
	int i = 0;

	while(str[i])
	{
		_putchar(str[i];
		i++;
	}
}

/**
 *_atoi - convert strings to integer
 *@s: the string to convert
 *
 *Return: integer
 */
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int atoi = 0, Fstnum, i;

	for (Fstnum = 0; !(s[Fstnum] >= 48 && s[Fstnum] <= 57); Fstnum++)
	{
		if (s[Fstnum] == '-')
		{
			sign = -1;
		}
	}
	for (i = Fstnum; s[i] >= 48 && s[i] <= 57; i++)
	{
		atoi *= 10;
		atoi += (s[i] - 48);
	}
}
/**
 *print_int - printd integer
 *@n: int
 *
 *Return: 
 */
0

/**
 *main - calculate the multiplication
 *@argc: integer
 *@argv: the numbers
 *
 *Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
