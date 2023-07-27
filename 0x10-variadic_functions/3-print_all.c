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
	char ch;
	int I, i;
	float F; 
	char *S;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == 'c')
		{
                        ch = va_arg(args,int);
                        putchar(ch);
			printf(", ");
                }
		else if (format[i] == 'i')
		{
			I = va_arg(args, int);
			printf("%d", I);
			printf(", ");
		}
		else if (format[i] == 'f')
		{
			F = va_arg(args, double);
			printf("%f", F);
			printf(", ");
		}
		else if (format[i] == 's')
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
