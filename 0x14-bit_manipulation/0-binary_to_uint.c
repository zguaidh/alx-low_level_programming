#include "main.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: the char to convert
 *
 * Return: the converted number or 0 ifb is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum = sum * 2 + (b[i] - 48);
	}
	return (sum);
}
