#include <stdio.h>
/**
 *main - entry point
 *Description: prints the sum of the even-valued terms
 *Return: 0
 */
int main(void)
{
	int count = 0;
	unsigned long n = 0;
	unsigned long F = 1;
	unsigned long Fn;
	float sum = 0;

	for (count = 0; Fn < 4000000; count++)
	{
		Fn = n + F;

			if (Fn % 2 == 0)
			{
				sum = sum + Fn;
			}
		n = F;
		F = Fn;
	}
	printf("%.0f\n", sum);
	return (0);
}
