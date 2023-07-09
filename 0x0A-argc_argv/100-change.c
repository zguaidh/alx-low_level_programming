#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the minimum number of coins to make change for money.
 *@argc: number of arguments
 *@argv: the array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, min = 0, amount = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (amount >= cents[i])
			{
				min += amount / cents[i];
				amount = amount % cents[i];
				if (amount % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", min);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
