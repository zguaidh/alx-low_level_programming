#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end
 *@head: the head
 *@n: the integer element of the new node
 *Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*Allocate memory for the node to add in the end*/
	listint_t *end_node = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (end_node == NULL)
		return (NULL);

	/* Initializing the new node*/
	end_node->n = n;
	end_node->next = NULL;

	/* If the our list is empty then the new node is the head*/
	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		/* Iterate throught the list to find the last node*/
		listint_t *node = *head;

		while (node->next != NULL)
			node = node->next;
		/* Meke end_node the tail of our list*/
		node->next = end_node;
	}
	return (end_node);
}
