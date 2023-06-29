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
	int diff = ((int)*s1 - 48) - ((int)*s2 - 48);

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (diff);
		}
		else if (s1[i] > s2[i])
		{
			return (diff);
		}
		i++;
	}
	return (0);
}
