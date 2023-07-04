#include "main.h"

/**
 *swap_int - swap two integers;
 *@a: variable to swap;
 *@b: variable to swap;
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
