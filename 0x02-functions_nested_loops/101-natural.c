#include <stdio.h>
/**
 *main - entry point
 *Description: prints the sum of  the multiples of 3 or 5 below 1024,
 *Return: 0
 */
int main(void)
{
	int n;
	int S = 0;

	for  (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			S += n;
		}
	}
	printf("%d\n", S);
	return (0);
}