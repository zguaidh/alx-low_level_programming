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
int main(int argc, char **argv)
{
	int (*operation)(int, int);
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if (argc >= 3)
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[2]);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (argv[2][0] ==  '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", operation(num1, num2));
	return (0);
}
