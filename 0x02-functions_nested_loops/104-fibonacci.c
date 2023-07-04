#include <stdio.h>
/**main - entry point
 *Description:  finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 *Return: 0
 */
 int main(void)
{
	int count =0;
	long n = 1;
	long F = 1;
	long sum;

	for (count = 0; count < 98; count++)
	{
		if (count == 0)
		{
			printf("%ld", F);
		}
		else
		{
			sum = n + F;

		}
	}

}
