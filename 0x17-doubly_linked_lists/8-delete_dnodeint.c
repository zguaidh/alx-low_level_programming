#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node at index of  linked list.
 *
 *@head: the head of the list
 *@index: the index of the node that should be deleted
 *
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i, len = 0;
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);
	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	current = *head;
	for (i = 0; i < index; i++)
	{
		current = current->next;
	}
	if (index == 0)
	{
		current->next = NULL;
		current->next->prev = NULL;
		current->next = *head;
	}
	current->prev->next = current->next;
	current->next->prev = current->prev;
	return (1);
}
