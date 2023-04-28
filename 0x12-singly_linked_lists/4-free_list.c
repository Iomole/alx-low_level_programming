#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function that frees a linked list(list_t)
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *n;

	while (head)
	{
		n = head->next;
		free(head->str);
		free(head);
		head = n;
	}
}

