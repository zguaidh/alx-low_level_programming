#include "main.h"
#include <stddef.h>
/**
 *_strchr - function that locates a character in a string
 *@s: the string where to search
 *@c: the character to look for
 *
 *Return: c if found or NULL otherwise
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
