#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  printing the alphabet in lowercase
 *
 * Return: 0
 *
 */

int main(void)

{
	char alph;

	while (alph != 'q' || alph != 'e')
	{

		for (alph = 'a'; alph <= 'z'; alph++)
		{
		putchar(alph);
		}
		putchar('\n');
		return (0);
	}
	return (0);
}
