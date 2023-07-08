#include "main.h"
#include <stdio.h>
/**
 *main - entry point
 *@argc: number of argmnts
 *@argv: the array
 *
 *Return:0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
