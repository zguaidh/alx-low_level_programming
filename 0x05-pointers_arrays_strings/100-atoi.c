#include "main.h"
/**
 *_atoi - function that convert a string to an integer.
 *@s: the string to convert
 *
 *Return: convert a string to an integer
 */
int _atoi(char *s)
{
	unsigned int N = 0;
	int S = 1;

	do {
		if (*s == '-')
			S *= -1;
		else if (*s >= '0' && *s <= '9')
			N = (N * 10) + (*s - '0');
		else if (N > 0)
			break;
	} while (*s++);

	return (N * S);
}
