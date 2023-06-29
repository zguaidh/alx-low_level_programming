#include "main.h"

/**
 *_strncat - function that concatenates two strings.
 *@dest:the first string
 *@src: the second string
 *@n: the number of bytes to use from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (src[i] != '\0' && i < n)
	{
		*ptr = src[i];
		ptr++;
		i++;
	}
	return (dest);
}
