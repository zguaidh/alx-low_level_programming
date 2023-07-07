#include "main.h"
/**
 **_memset - function that fills memory with a constant byte.
 *@s: string to fill
 *@b: character to be filled with
 *@n: number of bytes to fill
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
