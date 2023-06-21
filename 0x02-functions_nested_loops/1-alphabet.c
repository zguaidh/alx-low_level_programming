#include "main.h"

/**
 * main - Entry point
 *
 * Description: printing the alphabet
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
	return (0);
}
