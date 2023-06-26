#include "main.h"
/**
 *rev_string -  function that reverses a string.
 *@s: the string to reverse
 *Return: no return
 */
void rev_string(char *s)
{
	int i, L, x;

	for (L = 0; s[L] != '\0'; ++L)
		;

	for (i = 0; i < L / 2; i++)
	{
	x = s[i];
	s[i] = s[L - i - 1];
	s[L - i - 1] = x;
	}
}
