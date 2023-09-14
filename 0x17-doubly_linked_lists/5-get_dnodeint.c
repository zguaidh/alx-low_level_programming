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
/**
 *get_dnodeint_at_index - eturns the nth node of a dlistint_t linked list
 *
 *@head: the head of the list
 *@index: the index of the node to return
 *
 *Return: returns the nth node or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t len = dlistint_len(head);
	unsigned int i;
	dlistint_t *current = head;

	if (index >= len)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		current = current->next;
	}
	return (current);
}
