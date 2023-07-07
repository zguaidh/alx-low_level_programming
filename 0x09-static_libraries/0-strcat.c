#include "main.h"

/**
 *_strcat - function that concatenates two strings.
 *@dest:the first string
 *@src: the second string
 *Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (src[i] != '\0')
	{
		*ptr = src[i];
		ptr++;
		i++;
	}
	return (dest);
}
