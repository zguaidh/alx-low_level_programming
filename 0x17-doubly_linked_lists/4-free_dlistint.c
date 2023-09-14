#include "lists.h"

/**
 *free_dlistint - frees a dlistint_t list
 *
 *@head: the head of the list
 *
 *Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
