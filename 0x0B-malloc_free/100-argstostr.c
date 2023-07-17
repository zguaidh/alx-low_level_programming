#include "main.h"
#include <stdlib.h>
/**
 *_strlen - returns the lenght of the string
 *@s: the string
 *
 *Return: lenght
 */
int _strlen(char *s)
{
	int len = 0;

	for (; s[len] != '\0'; len++)
	;
	return (len);
}

/**
 *argstostr - function that concatenates all the arguments of your program
 *@ac: the number of arguments of the program
 *@av: a string of chars
 *
 *Return: a pointer to new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int index;
	char *ptr;
	int len = _strlen(*av);

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		len += ac + 1;
		ptr = (char *)malloc(sizeof(char) * len);
		if (ptr == NULL)
			return ('\0');
		index = 0;
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				ptr[index] = av[i][j];
				index++;
			}
			ptr[index] = '\n';
			index++;
		}
	ptr[index] = '\0';
	return (ptr);

	}
}
