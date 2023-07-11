#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars, initialized with a specific char
 *@size: the size of the array
 *@c: the specific char to begin with
 *Return: NULL if size=0 r if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return ('\0');
	else
	{
		ar = malloc(size * sizeof(char));
		*ar = c;
		return (ar);
	}
}
