#include "lists.h"

/**
 *insert_dnodeint_at_index -  inserts a new node at a given position
 *
 *@h: head
 *@idx: the given index where the new node should be added.
 *@n: the data of the node
 *
 *Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	unsigned int i, len = 0;
	dlistint_t *current = *h;

	if (newNode == NULL || *h == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	current = *h;
	if (idx >= len)
		return (NULL);
	for (i = 0; i < idx; i++)
	{
		current = current->next;
	}
	newNode->prev = current->prev;
	current->prev->next = newNode;
	newNode->next = current;
	current->prev = newNode;

	return (newNode);

}
