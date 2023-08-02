#include "lists.h"
/**
 *free_listint2 - frees a listint_t and set th ehead to NULL
 *@head: head of the linked list
 *Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (*head == NULL)
	{
		;
	}
	while (*head)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
	*head = NULL;
}
