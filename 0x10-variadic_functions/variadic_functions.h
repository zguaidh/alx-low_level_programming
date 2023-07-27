#ifndef HEADER_FILE_H
#define HEADER_FILE_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int printChar(va_list args);
int printStr(va_list args);
int printInt(va_list args);
int printFloat(va_list args);
typedef struct
	{
		char format;
		int (*funct)(va_list);
	} specifier_t;

#endif
