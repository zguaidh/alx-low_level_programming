#include "lists.h"
/**
 *free_listint - frees a listint_t list
 *@head: the head of the list
 *
 *Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head)
	{
		current_node = head;
		head = head->next;
		free(current_node);

	}
}
