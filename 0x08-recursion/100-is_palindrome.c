#include "main.h"

/**
 *_strlen_recursion - function that returns the length of a string.
 *@s: the string
 *
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * rev_cmp - it campares the reverse of string.
 *@s : the string
 *@i : the start the string
 *@j: the end the string
 *Return: 1 if a string is a palindrome and 0 if not.
 */

int rev_cmp(char *s, int i, int j)
{

	if (j <= 1)
		return (1);
	else if (s[i] == s[j])
		return (rev_cmp(s, i + 1, j - 1));
	else
		return (0);
}

/**
 *is_palindrome - it returns 1 if a string is a palindrome or 0 if not.
 *@s : the string
 *
 *Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (rev_cmp(s, 0, len - 1));
}
