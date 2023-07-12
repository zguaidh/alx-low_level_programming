#include "main.h"
#include <stdlib.h>
/**
 *_strlen - function that returns the length of a string.
 *@s: the string that wer going to calculate its length
 *Return: length
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}


/**
 *_strdup - function that returns a copy of the given string
 *@str: the given string
 *
 *Return: copy of the string or NULL if str=NULL or if insufficient memory
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int len = _strlen(str);

	ptr = malloc(len * sizeof(char));
	if (*str == '\0')
		ptr = '\0';
	else
	{
		for (i = 0; i < len; i++)
		{
			ptr[i] = str[i];
		}
		return (ptr);
	}
	return (ptr);
}
