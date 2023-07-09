#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point of a a program that multiplies two numbers.
 *@argc: number of argmnts
 *@argv: the array
 *
 *Return:0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
