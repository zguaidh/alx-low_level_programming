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
	long F = 2;

	for (count = 0; count <= 50; count++)
	{
		if (count == 0)
		{
			printf("%d", n);
		}
		else if (count == 1)
		{
			printf(", %ld", F);
		}
		else
		{
			F = F + n;
			n = F - n;

			printf(", %ld", F);
		}
	}
	printf("\n");
	return (0);

}
