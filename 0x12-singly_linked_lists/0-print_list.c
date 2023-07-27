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
 *print_list - prints alla the elements of a list_t
 *@h: the the header
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
		}
		printf("[%d] %s\n", _strlenght(h->str), h->str);
		h = h->next;
		count++;
	}
	return (count);
}
