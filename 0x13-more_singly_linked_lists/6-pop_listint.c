#include "lists.h"
/**
 * pop_listint - deletes the head node and returns its data
 * @head: the head of th elinked list
 * Return: the head data
 */
int pop_listint(listint_t **head)
{
	listint_t *pop_node;
	int n;

	if (!head || !*head)
		return (0);
	pop_node = (*head)->next;
	n = (*head)->n;
	*head = pop_node;
	return (n);

}
