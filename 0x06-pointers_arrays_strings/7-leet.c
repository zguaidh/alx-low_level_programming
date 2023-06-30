#include "main.h"
#include <stdio.h>
/**
 *leet - function that encodes a string into 1337.
 *@s :the string
 *Return: ptr
 */

char *leet(char *s)
{
	char *ptr = s;
	char lettre[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(lettre) / sizeof(char); i++)
		{
			if (*s == lettre[i] || *s == lettre[i] + 32)
			{
				*s = 48 + val[i];
			}
		}
		s++;
	}
	return (ptr);
}
