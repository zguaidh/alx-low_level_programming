#include "main.h"

/**
 *_strcmp - function that compares two strings.
 *@s1: first string
 *@s2: second string
 *Return: 0 if aqual, -1 if smaller 1 otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (-15);
		}
		else if (s1[i] > s2[i])
		{
			return (15);
		}
		i++;
	}
	return (0);
}
