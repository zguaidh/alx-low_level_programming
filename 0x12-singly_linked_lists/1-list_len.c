#include "lists.h"

/**
 *_strlenght - calculate the lenght of a string
 *@Str: the string
 *
 *Return: the lenght of the string
 */
int _strlenght(char *Str)
{
	int i = 0;

	if (Str == NULL)
	{
		return (0);
	}
	while (*Str++)
		i++;
	return (i);
}

/**
 *list_len - returns the number of elements of a list_t
 *@h: the the header
 *Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			h = h->next;
			count++;
		}
		h = h->next;
		count++;
	}
	return (count);
}
