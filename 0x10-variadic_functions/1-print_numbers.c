#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - function that prints numbers
 *@separator: the string to be printed between numbers
 *@n: number of integers passed to the function
 *
 *Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, unsigned int);

		printf("%d", x);
		if (separator == NULL || i == n - 1)
		{
			;
		}
		else
			printf("%s", separator);

	}
	printf("\n");
	va_end(args);
}
