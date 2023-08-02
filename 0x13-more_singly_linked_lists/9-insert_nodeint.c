#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at nth index
 *@head: the head of linked list
 *@idx: where to insert the new node
 *@n: the value of integer elzments
 *Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *nodeint = malloc(sizeof(listint_t));
	unsigned int count = 0;

	if (!head || !*head || !nodeint)
		return (NULL);

	nodeint->n = n;
	nodeint->next = NULL;
	node = *head;
	while (node)
	{
		if (count == idx - 1)
		{
			nodeint->next = node->next;
			node->next = nodeint;
			return (nodeint);
		}
		count++;
		node = node->next;
	}
	free(nodeint);
	return (NULL);
}
