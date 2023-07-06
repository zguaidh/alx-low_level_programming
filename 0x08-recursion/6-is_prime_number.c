#include "main.h"
/**
 *is_prime_number - it returns 1 if the input int is a prime num, otherwise 0
 *@n: the integer to check
 *@i: integer to iterate
 *Return: 1 if true otherwise 0
 */
int is_prime(int n, int i);
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
/**
 *is_prime - checks if n is a prime num
 *@n: the integer to check
 *@i: integer to iterate
 *Return: integer
 */
int is_prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (is_prime(n, i + 1));
}

