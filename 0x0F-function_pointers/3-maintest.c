#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 *main - check the code
 *@argc: nbr of argumrnts
 *@argv: the arguments
 *
 *Return: int
 */
int main(int argc, char *argv[])
{
	int output ;
	char *s = "+-*/%";


	if (argc >= 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] !=  s[0] || *argv[2] !=  s[1] || *argv[2] !=  s[2] || *argv[2] !=  s[3] || *argv[2] !=  s[4])
	{
		printf("Error\n");
		exit(99);
	}
	if ((atoi(argv[3]) == 0 && *argv[2] !=  s[3]) || (atoi(argv[3]) && *argv[2] !=  s[4]))
	{
		printf("Error\n");
		exit(100);
	}
	output = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", output);
	return (0);
}
