#include <stdio.h>
/**
 *main - entry point
 *Description: prints the sum of  the multiples of 3 or 5 below 1024,
 *Return: 0
 */
int main(void)
{
	int n;

	for  (n = 0; n < 1024; n++)
	{
		int S = 0;
		int S1;
		int S2;

		while (n % 3 == 0)
		{
			S1 = S + n;
		}
		for (S2 = S1; n % 5 == 0; S2 = S1 + n)
		{
			printf("%d", S2);
		}
	}
	return (0);
}
