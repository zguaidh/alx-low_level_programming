#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - entry point of a program thatadds positive numbers.
 *@argc: number of argmnts
 *@argv: the array
 *
 *Return:0
 */
int main(int argc, char *argv[])
{
	unsigned int x, add = 0;
	int i;
	char *p;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			p = argv[i];

			for (x = 0; x < strlen(p); x++)
			{
				if (p[x] < 48 || p[x] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(p);
			p++;
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
