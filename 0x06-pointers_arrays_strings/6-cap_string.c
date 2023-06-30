#include "main.h"
#include <stdio.h>
/**
 *lowercase - deterine whether the char is lower
 *@x: character
 * Return: 1 if true, 0 if false
 */
int lowercase(char x)
{
	return (x >= 'a' && x <= 'z');
}

/**
 *Separators - deterine whether the char is Separator
 *@x: character
 * Return: 1 if true, 0 if false
 */
int Separators(char x)
{
	int i;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 13; i++)
		if (x == sep[i])
			return (1);
	return (0);
}


/**
 **cap_string -  function that capitalizes all words of a string.
 *@str : the string
 *Return: str
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int issep = 1;

	while (*str)
	{
		if (Separators(*str))
			issep = 1;
		else if (lowercase(*str) && issep)
		{
			*str -= 32;
			issep = 0;
		}
		else
			issep = 0;
		str++;
	}
	return (ptr);
}
