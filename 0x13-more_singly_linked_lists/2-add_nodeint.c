#include "lists.h"
/**
 *add_nodeint - adds a new node at the beginning
 *@head: the head
 *@n: the int element
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!head)
		return (NULL);

	if (!node)
		return (NULL);

	node->next = NULL;
	node->n = n;
	if (*head != NULL)
	{
		node->next = *head;
	}
	*head = node;
	return (node);
}
