#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: printing the lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)

{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
