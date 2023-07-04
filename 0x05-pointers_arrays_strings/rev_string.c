#include "main.h"

/**
 *rev_string - reverses a string
 *@s: the string
 */
void rev_string(char *s)
{
	int i = 0;
	int len;
	int c;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i++;

	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
}
