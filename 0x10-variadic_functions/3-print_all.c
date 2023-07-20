#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all - funtion that prints anything
 *@format: is the list of types of arguments
 *
 *Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int I;
	float F; 
	char *S;

	va_start(args, format);
	while (*format)
	{
		if (*format == 'c' || *format == 'i')
		{
			I = va_arg(args, int);
			printf("%d", I);
		}
		if (*format == 'f')
		{
			F = va_arg(args, double);
			printf("%f", F);
		}
		if (*format == 's')
		{
			S = va_arg(args, char*);
			if (S == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", S);
			}
		}
	}
	va_end(args);
	printf("\n");
}
