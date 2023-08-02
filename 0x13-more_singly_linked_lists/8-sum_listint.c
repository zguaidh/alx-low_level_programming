#include "lists.h"
/**
 *sum_listint - returns the sum of all the data
 *@head: the head of the linked list
 *Return: the sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	if (!head)
		return (0);

	node = head;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
