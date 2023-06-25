#include <stdio.h>
/**
 *main - entry point
 *Description:  prints the first 50 Fibonacci numbers, starting with 1 and 2
 *Return: 0
 */
int main(void)
{
	int count;
	int n = 1;
	int F = 1;

	for (count = 0; count <= 50; count++)
	{
		if (count == 0)
		{
			printf("%d", n);
		}
		else if (count != 0)
		{
			F = F + n;
			n = F - n;

			printf(", %d", F);
		}
	}
	printf("\n");
	return (0);

}
