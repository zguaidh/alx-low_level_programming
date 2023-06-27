#include "main.h"
#include <stdio.h>

/**
 * print_array - ifunction that prints n elements of an array of integers
 *@n:is the number of elements of the array to be printed
 *@a:
 *
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
