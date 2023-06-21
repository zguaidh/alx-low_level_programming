#include "main.h"
/**
 *print_last_digit - prints the last digit
 *
 *Description: function that prints the last digit of a number.
 *@i:the integer to be checked
 *
 *Return: the value of the last digit
 */
int print_last_digit(int i)
{
	int last_digit = i % 10;

	return (last_digit);
	_putchar('\n');
}
