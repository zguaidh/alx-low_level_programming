#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strlen - returs lenght of the string
 *@s: the string
 *
 *Return: int
 */
int _strlen(char *s)
{
	int len = 0;

	for (; s[len] != '\0'; len++)
	;
	return (len);
}
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
	unsigned int len1, len2, i, j;
	char *ptr;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	if (n >= len2)
	{
		for (j = 0; j < len2; j++, i++)
			ptr[i] = s2[j];
	}
	else
	{
		for (j = 0; j < n; j++, i++)
			ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
