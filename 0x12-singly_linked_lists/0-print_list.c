#include "lists.h"

/**
 *_strlenght - calculate the lenght of a string
 *@s: the string
 *
 *Return: the lenght of the string
 */
int _strlenght(char *Str)
{
	int i = 0;

	if (!Str)
	{
		Str = "(nil)";	
	}
	while (*Str++)
		i++;
	return (i);
}

/**
 *print_list - prints alla the elements of a list_t
 *@list_l: the list to print
 *@h: the the header
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlenght(h->str), h->str);
		h = h->next;
		count++;
	}
	return (count);
}
