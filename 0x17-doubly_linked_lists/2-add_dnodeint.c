#include "lists.h"

/**
 *add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 *@head: the head of the list
 *@n: the data of the new node
 *
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;
	return (newNode);
}
