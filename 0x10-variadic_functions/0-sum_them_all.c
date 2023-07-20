#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - returns the sum of ahh parameters
 *@n: the first parametre
 *
 *Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		unsigned int x = va_arg(ap, unsigned int);

		if (n == 0)
			return (0);

		sum += x;
	}
	va_end(ap);
	return (sum);
}
