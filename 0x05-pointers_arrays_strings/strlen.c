#include "main.h"

/**
 *_strlen - return the length of a string
 *@s: the strig
 *Return: length
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;
	return (len);
}
