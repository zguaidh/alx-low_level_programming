#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - function that prints a name
 *@name: the name to be printed
 *@f:pointer to a function
 *
 *Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		;
	else
		f(name);
}
