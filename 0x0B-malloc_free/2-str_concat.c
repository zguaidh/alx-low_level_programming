#include "main.h"
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
 *str_concat - function that concatenates two strings
 *@s1: the first string
 *@s2: the second string
 *Return: s1 followed by s2 or Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *ptr;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	ptr = malloc((len1 + len2) * sizeof(char) + 1);
	if (ptr == 0)
		return (0);
	for (i = 0; i <= len1 + len2; i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i + len2];
	}
	ptr[i] = '\0';
	return (ptr);
}
