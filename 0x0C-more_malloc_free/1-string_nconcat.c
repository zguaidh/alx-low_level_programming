#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - concatinates two strings
 *@s1: first string
 *@s2: second string
 *@n: number of bytes from s2
 *
 *Return: ptr or NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *ptr;

	if (s1 != NULL)
	{
		len1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		len2 = strlen(s2);
	}
	if (n >= len2)
	{
		n = len2;
	}
	ptr = malloc(len1 + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[len1 + j] = s2[j];
	}
	ptr[len1 + n] = '\0';
	return (ptr);
}
