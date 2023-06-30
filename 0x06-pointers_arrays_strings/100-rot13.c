#include "main.h"
/**
 **rot13:function that encodes a string using rot13.
 *@str: the string
 *Return: ptr
 */
char *rot13(char *str)
{
	int i;

	char s[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = str;

	while (*str)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*str == s[i])
			{
				*str = rot13[i];
				break;
			}
		}
		str++;
	}
	return (ptr);

}
