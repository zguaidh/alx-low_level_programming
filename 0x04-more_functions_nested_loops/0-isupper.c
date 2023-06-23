#include "main.h"
/**
 * int_isupper - checks for uppercase character
 *
 * Description:  function that checks for uppercase character.
 * @c:the character to be checked
 *
 * Return: 1 if c is uppercase and otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
