#include "main.h"
/**
 *reverse_array - function that reverses the content of an array of integers.
 *@a: the array
 *@n: the ele,ents of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int c = 0;

	while (i < n / 2)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
		i++;
	}
}
