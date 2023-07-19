#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"
/**
 *op_add - function that adds two integers
 *@a: first integer
 *@b: second integer
 *
 *Return: the sum
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 *op_sub - function that returns the difference
 *@a: first int
 *@b: second int
 *
 *Return:the difference
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 *op_mul - multiplates a times b
 *@a: first int
 *@b: second int
 *
 *Return: multiplication
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 *op_div - returns division
 *@a: first int
 *@b: second int
 *
 *Return: the division
 */
int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
 *op_mod - returns the remainder of a%b
 *@a: first int
 *@b: first int
 *
 *Return: the reminder
 */
int op_mod(int a, int b)
{
	return ((a) % (b));
}
