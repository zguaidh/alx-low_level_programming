#include "main.h"

/**
 *_sqrt_recursion - function that returns the natural square root of a number.
 *@n: the number
 *@result: square root
 *Return: returns the natural square root of a number otherwise -1
 */
int _sqrt(int n, int result);
int _sqrt_recursion(int n)
{
	if (n < 2)
		return  (n);
	else
		return (_sqrt(n, 2));
}
/**
 *_sqrt - calculate square root of n
 *@n: the given integer
 *@result: square root
 *Return: ineger
 */
int _sqrt(int n, int result)
{
	if (result * result == n)
		return (result);
	else if (result * result < n)
		return (_sqrt(n, result + 1));
	else
		return (-1);
}
