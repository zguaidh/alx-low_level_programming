#include "lists.h"

/**
 *add_node - adds a new node
 *@head: head of the list
 *@str: field o node
 *Return: size of the list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = _strlenght(new->str);
	}
	new->next = *head;
	*head = new;
	return (new);
}
