#include <stdio.h>
/**
 *main - entry point
 *Description:  prints the first 50 Fibonacci numbers, starting with 1 and 2
 *Return: 0
 */
int main(void)
{
	int count;
	long n = 1;
	long F = 2;
	long sum;

	for (count = 0; count < 50; count++)
	{
		if (count == 0)
		{
			printf("%ld", n);
		}
		else if (count == 1)
		{
			printf(", %ld", F);
		}
		else
		{
			sum = n + F;

			printf(", %ld", sum);

			n = F;
			F = sum;
		}
	}
	printf("\n");
	return (0);

}
