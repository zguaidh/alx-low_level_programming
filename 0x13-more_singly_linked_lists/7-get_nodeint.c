#include "lists.h"
/**
 *listint_len - returns the number of elements
 *@h: the header
 *Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
/**
 *get_nodeint_at_index - returns the nth node of a linked list
 *@head: the head of the linked list
 *@index: the index of the node starting at 0
 *Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count = 0;

	if (!head)
		return (NULL);
	if (index > listint_len(head) - 1)
		return (NULL);
	while (count < index)
	{
		node = head;
		node = node->next;
		count++;
	}
	return (node);

}
