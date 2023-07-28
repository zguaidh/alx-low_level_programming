#include "lists.h"

/**
 *add_node_end - adds a new node at the end
 *@head: head of the list
 *@str: field o node
 *Return: adresse of the new elem or NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end = malloc(sizeof(list_t));
	list_t *tail = *head;

	if (!new_end || !head)
		return (NULL);
	if (str)
	{
		new_end->str = strdup(str);
		if (!new_end->str)
		{
			free(new_end);
			return (NULL);
		}
		new_end->len = _strlenght(new_end->str);
	}
	if (tail)
	{
		while (tail->next)
			tail = tail->next;
		tail->next = new_end;
	}
	else
	*head = new_end;
	return (new_end);
}
