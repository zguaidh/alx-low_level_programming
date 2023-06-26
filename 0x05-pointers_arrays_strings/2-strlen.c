#include "main.h"
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
