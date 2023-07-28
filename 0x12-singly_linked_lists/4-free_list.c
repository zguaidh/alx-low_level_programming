#include "lists.h"

/**
 *free_list - frees a list_t list
 *@head: the head
 *Return: no return
 */
void free_list(list_t *head)
{

	while (head)
	{
		free(head->str);
		head = head->next;
	}
}
