#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes a node in a linked list,
 * at a certain index
 * @head: parameter for pointer to the first element in the list
 * @index: parameter for index of the node to delete
 *
 * Return: 1 if successful, or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *cur = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}

	while (x < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		x++;
	}


	cur = t->next;
	t->next = cur->next;
	free(cur);

	return (1);
}

