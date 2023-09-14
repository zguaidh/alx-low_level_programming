#include "lists.h"
/**
 * dlistint_len - returns the number of elements of a dlistint_t list
 *
 *@h: the head of the list
 *
 *Return: the length of lis
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
