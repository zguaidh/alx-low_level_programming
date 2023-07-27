#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *printStr - prints a string
 *@args: list of args
 *Return: int
 */
int printStr(va_list args)
{
	char *str;
	
	str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil)");
	}
	else
	{
	printf("%s", str);
	}
	return (0);
}
/**
 *printChar - prints a character
 *@args: list of args
 *Return: int
 */
int printChar(va_list args)
{
	char ch;
	
	ch = va_arg(args, int);
	putchar(ch);
	return (0);
}
/**
 * printInt - prints number
 * @args: args
 * Return: int
 */
int printInt(va_list args)
{
	int I;

	I = va_arg(args, int);
	printf("%d", I);
	return(0);
}
/**
 * printFloat - prints float numbers
 * @args: args
 * Return: int
 */
int printFloat(va_list args)
{
	float F;

	F = va_arg(args, double);
	printf("%f", F);
	return (0);
}

/**
 *print_all - funtion that prints anything
 *@format: is the list of types of arguments
 *
 *Return: no return
 */
void print_all(const char * const format, ...)
{
	int j;
	va_list args;

	va_start(args, format);
	for (j = 0; format[j] != '\0'; j++)
	{
		specifier_t sp[] =
		{
			{'c', printChar},
			{'i', printInt},
			{'f', printFloat},
			{'s', printStr},
		};
		unsigned int i = 0;
		int True = 0;

		for (i = 0; i < sizeof(sp)/sizeof(sp[0]); i++)
		{
			if (*format == sp[i].format)
			{
				sp[i].funct(args);
				printf(", ");
				True = 1;
				break;
			}
		}
		if (!True)
		{
			;
		}
	}


	va_end(args);
	printf("\n");
}
